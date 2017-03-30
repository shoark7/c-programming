/* sort algorithm collections for hw 2-2.
 *
 * 한국외대 경영학과 201101328 박성환.
 *
 * "선택", "버블", "삽입", "쉘", "병합", "퀵"
 * 정렬이 순서대로 구현되어 있으며
 * 각 단어를 검색하면 해당 알고리즘으로 점프할 수 있다.
 *
 * 이 헤더 파일을 통해 실제 테스트를 진행하도록 한다.
 * 각 알고리즘의 비교, 대입 횟수를 세기 위한 조건들이 추가되었다.
 *
 *
 * 구현 날짜 : 2017-03-28 - 2017-03-29
 *
 * All rights are not reserved.
 */


#include <stdio.h>
#include <stdlib.h>


// Make custom boolean type
typedef int bool;
enum { false, true };


int compare = 0;
int move = 0;
int compare_and_move[2]; // 0번째 인덱스에 비교 횟수, 1번째에 대입 횟수를 기록


// Function declarations
// 모든 정렬 함수에 무조건 인자를 3개 받도록 일부러 만들었습니다.
// 본 실험에서 함수 포인터 배열을 써보기 위해서입니다.
int* selection_sort(int[], int, int);
int* bubble_sort(int[], int, int);
int* insertion_sort(int[], int, int);
int* insertion_for_sort(int[], int, int, int, int*, int*); // helper for shell sort
int* shell_sort(int[], int, int);
int* helper_merge(int[], int, int, int, int*, int*);       // helper for merge sort
int* _merge_sort(int[], int, int, int*, int*);             // helper for merge sort
int* merge_sort(int[], int, int);
int get_pivot(int[], int, int, int*, int*);                // helper for quick sort
int* _quick_sort(int[], int, int, int*, int*);             // helper for quick sort
int* quick_sort(int[], int, int);


// 선택정렬
int* selection_sort(int a[], int offset, int end) {
    // offset : 인자를 3개로 맞춰주기 위한 변수. 의미 없음.

    int i, j, index;
    int temp;
    compare = 2; // 두 번의 for문의 마지막 조건식 연산
    move = 2;    // 두 번의 for문의 마지막 변수 증가 연산

    for (i = 0; i <= end; i++) {
        index = i;
        move++;    // index 대입

        for (j = i + 1; j <= end; j++) {
            if ( a[index] > a[j] ) {
                index = j;
                move++; // index 대입
            }
            compare++; // if문 비교

            move++;    // j 증가
            compare++; // for문 비교
        }

        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
        move += 2; // swap

        move++;    // i 증가
        compare++; // for 문 비교
    }

    compare_and_move[0] = compare;
    compare_and_move[1] = move;

    return compare_and_move;
}



// 버블정렬
int* bubble_sort(int a[], int offset,  int end) {
    // offset : 인자를 3개로 맞춰주기 위한 변수. 의미 없음.

    int i, j, temp;
    bool changed;
    compare = 2;
    move = 2;

    for (i = end; i > 0; i--)
    {
        changed = false;
        move++;    // changed 변수 설정

        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                move += 2; // swap 시행
                changed = true;
                move++;    // changed 값 변경
            }
            compare++; // if 연산

            move++;    // j값 증가
            compare++; // for문 검사
        }

        compare++; // 뒷 조건문 비교
        if (changed == false) {
            break;
        }

        move++;    // i 감소
        compare++; // for문 조건식
    }

    compare_and_move[0] = compare;
    compare_and_move[1] = move;

    return compare_and_move;
}



// 삽입정렬
int* insertion_sort(int a[], int offset, int end) {
    // offset : 인자를 3개로 맞춰주기 위한 변수. 의미 없음.

    int i, j, temp;
    compare = 2;
    move = 2;

    for (i = 1; i <= end; i++)
    {
        for (j = i; j >= 1; j--)
        {
            compare++; // 뒷 if 조건문
            if (a[j] < a[j - 1]) {
               temp = a[j];
               a[j] = a[j - 1];
               a[j - 1] = temp;
               move += 2; // swap
            }
            else break;

            move++;    // j 값 감소
            compare++; // 초기 조건식
        }

        move++;    // i값 증가
        compare++; // for문 조건식 실행
    }

    compare_and_move[0] = compare;
    compare_and_move[1] = move;

    return compare_and_move;
}



// 쉘정렬
//// Helper for shell sort.
int* insertion_for_sort(int a[], int start, int last, int h, int *compare, int *move) {

    int i, j, temp;
    (*compare) += 2;
    (*move) += 2;  // 두 번에서의 for문의 마지막 대입식, 조건식을 더함.

    for (i = start + h; i <= last; i += h) {
        for (j = i; j > start; j -= h) {

            (*compare)++;  // 뒷 if문 실행
            if( a[j] < a[j - h] ) {
                temp = a[j];
                a[j] = a[j - h];
                a[j - h] = temp;
                (*move) += 2; // swap
            }
            else break;

            (*move)++;      // j 증가
            (*compare)++;   // 조건식 시행
        }

        (*move)++;    // i 증가
        (*compare)++; // 조건식 시행
    }

}

//// shell sort implementation
int* shell_sort(int a[], int offset, int end) {

    int i, h;
    compare = 2;
    move = 2;

    for( h = (end + 1) / 2; h >= 1; h /= 2 ) {
        for( i = 0; i < h; i++ ) {
            insertion_for_sort(a, i, end, h, &compare, &move);
            move++;    // i 값 증가
            compare++; // for문 검사
        }
        move++;    // h값 변화
        compare++; // for문 검사
    }

    compare_and_move[0] = compare;
    compare_and_move[1] = move;

    return compare_and_move;
}



// 병합정렬
//// 1. Merge
int* helper_merge(int a[], int left, int mid, int right, int *compare, int *move) {

    int length = right - left + 1;
    int *temp_array = (int*)malloc(sizeof(int) * length);
    int temp_index = 0;
    int low_index = left;
    int high_index = mid + 1;
    (*move) += 5; // 5개의 변수 할당. 1, 2번째는 포함할까 말까 고민했지만 일단 넣겠습니다.

    while( low_index <= mid && high_index <= right ) {
        if( a[low_index] > a[high_index] ) {
            temp_array[temp_index] = a[high_index];
            high_index++;
            temp_index++;
        }
        else {
            temp_array[temp_index] = a[low_index];
            low_index++;
            temp_index++;
        }
        (*move) += 3; // 변수 값 3개 증가
        (*compare)++; // if 문 검사
    }
    (*compare)++; // 마지막 while 조건문 검사

    (*compare)++; // 뒷 if문 검사
    if( low_index <= mid ) { // 왼쪽을 다 못 채웠을 경우
        for(; low_index <= mid; low_index++) {
            temp_array[temp_index] = a[low_index];
            temp_index++;
            (*move) += 2; // 변수 두 개 값 변화
        }
        (*compare)++; // 마지막 for문 검사
    }
    else { // 오른쪽을 다 못 채웠을 경우
        for(; high_index <= right; high_index++) {
            temp_array[temp_index] = a[high_index];
            temp_index++;
            (*move) += 2; // 변수 두 개 값 변화
        }
        (*compare)++; // 마지막 for문 검사
    }

    // temp_array를 원래 a에 덮어씌움
    for(int i = 0; i < length; i++) {
        a[i + left] = temp_array[i];
        (*move)++; // 값 대입
    }

    (*compare)++;
    (*move)++;  // for문의 마지막 검사와 대입 반영

    free(temp_array);
}

//// 2. Merge Sort implementation
int* _merge_sort(int a[], int left, int right, int *compare, int *move) {

    int mid = (left + right) / 2;
    (*move)++;  // mid 변수값 설정

    (*compare)++; // 뒷 조건식 시행
    if( left >= right ) return NULL;

    _merge_sort(a, left, mid, compare, move);
    _merge_sort(a, mid + 1, right, compare, move);
    helper_merge(a, left, mid, right, compare, move);
}

//// 3. Wrapper for merge. 재귀로 인한 변수 재초기화를 막기 위해 wrapper로 감쌈.
int* merge_sort(int a[], int left, int right) {
    compare = 0;
    move = 0;  // 0으로 초기화

    _merge_sort(a, left, right, &compare, &move);

    compare_and_move[0] = compare;
    compare_and_move[1] = move;

    return compare_and_move;
}



// 퀵정렬
//// 1. Get pivot
int get_pivot(int a[], int start, int end, int* compare, int* move) {

    int temp;
    int pivot = start;
    int left = start;
    int right = end;
    (*move) += 3; // 변수 3개 대입

    while (left < right) {
        while (a[pivot] >= a[left] && left < end) {
            left++;
            (*move)++; // left 증가
            (*compare)++; // while문 비교
        }
        (*compare)++; // 마지막 while문

        while (a[pivot] < a[right]) {
            right--;
            (*move)++; // right 감소
            (*compare)++; // while문 비교
        }
        (*compare)++; // 마지막 while문

        (*compare)++; // 뒷 if문 검사
        if (left < right) {
            temp = a[right];
            a[right] = a[left];
            a[left] = temp;
            (*move) += 2; // swap
        }
    }
    (*compare)++; // 마지막 while문

    temp = a[pivot];
    a[pivot] = a[right];
    a[right] = temp;
    (*move) += 2; // swap

    return right;
}

//// 2. Quick sort implementation
int* _quick_sort(int a[], int start, int end, int* compare, int* move) {

    int pivot;

    (*compare)++; // 뒷 if문 실행
    if (start < end) {
        pivot = get_pivot(a, start, end, compare, move);
        _quick_sort(a, start, pivot - 1, compare, move);
        _quick_sort(a, pivot + 1, end, compare, move);
    }
}

//// 3. Quick sort wrapper 재귀식의 영향으로 변수 재초기화를 막기 위해 wrapper로 감쌈.
int* quick_sort(int a[], int start, int end) {

    compare = 0;
    move = 0;  // 0으로 초기화

    _quick_sort(a, start, end, &compare, &move);

    compare_and_move[0] = compare;
    compare_and_move[1] = move;

    return compare_and_move;
}
