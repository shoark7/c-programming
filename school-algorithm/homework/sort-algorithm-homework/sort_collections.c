/* sort algorithm collections.
 *
 * 한국외대 경영학과 201101328 박성환.
 *
 * "선택", "버블", "삽입", "쉘", "병합", "퀵"
 * 정렬이 순서대로 구현되어 있으며
 * 각 단어를 검색하면 해당 알고리즘으로 점프할 수 있다.
 *
 * 이 헤더 파일을 통해 실제 테스트를 진행하도록 한다.
 *
 *
 * 구현 날짜 : 2017-03-24 - 2017-03-27
 *
 * All rights are not reserved.
 */


#include <stdio.h>
#include <stdlib.h>


// Make custom boolean type
typedef int bool;
enum { false, true };


// Function declarations
// 모든 정렬 함수에 무조건 인자를 3개 받도록 일부러 만들었습니다.
// 본 실험에서 함수 포인터 배열을 써보기 위해서입니다.
void selection_sort(int[], int, int);
void bubble_sort(int[], int, int);
void insertion_sort(int[], int, int);
void insertion_for_sort(int[], int, int, int); // helper for shell sort
void shell_sort(int[], int, int);
void helper_merge(int[], int, int, int);       // helper for merge sort
void merge_sort(int[], int, int);
int get_pivot(int[], int, int);                // helper for quick sort
void quick_sort(int[], int, int);


// 선택정렬
void selection_sort(int a[], int offset, int end) {

    int i, j, index;
    int temp;

    for( i = 0; i <= end; i++ ) {
        index = i;

        for ( j = i + 1; j <= end; j++ ) {
            if ( a[index] > a[j] ) {
                index = j;
            }
        }

        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
}



// 버블정렬
void bubble_sort(int a[], int offset,  int end) {

    int i, j, temp;
    bool changed;

    for( i = end; i > 0; i-- )
    {
        changed = false;

        for( j = 0; j < i; j++ )
        {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                changed = true;
            }
        }

        if (changed == false) {
            break;
        }
    }
}



// 삽입정렬
void insertion_sort(int a[], int offset, int end) {

    int i, j, temp;

    for( i = 1; i <= end; i++ )
    {
        for( j = i; j >= 1; j-- )
        {
            if( a[j] < a[j - 1] ) {
               temp = a[j];
               a[j] = a[j - 1];
               a[j - 1] = temp;
            }
            else break;
        }
    }
}



// 쉘정렬
//// Helper for shell sort.
void insertion_for_sort(int a[], int start, int last, int h) {

    int i, j, temp;

    for( i = start + h; i <= last; i += h ) {
        for( j = i; j > start; j -= h ) {
            if( a[j] < a[j - h] ) {
                temp = a[j];
                a[j] = a[j - h];
                a[j - h] = temp;
            }
            else break;
        }
    }
}

//// shell sort implementation
void shell_sort(int a[], int offset, int end) {

    int i, h;

    for( h = (end + 1) / 2; h >= 1; h /= 2 ) {
        for( i = 0; i < h; i++ ) {
            insertion_for_sort(a, i, end, h);
        }
    }
}



// 병합정렬
//// 1. Merge
void helper_merge(int a[], int left, int mid, int right) {

    int length = right - left + 1;
    int *temp_array = (int*)malloc(sizeof(int) * length);
    int temp_index = 0;
    int low_index = left;
    int high_index = mid + 1;

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
    }

    if( low_index <= mid ) { // 왼쪽을 다 못 채웠을 경우
        for(; low_index <= mid; low_index++) {
            temp_array[temp_index] = a[low_index];
            temp_index++;
        }
    }
    else { // 오른쪽을 다 못 채웠을 경우
        for(; high_index <= right; high_index++) {
            temp_array[temp_index] = a[high_index];
            temp_index++;
        }
    }

    // temp_array를 원래 a에 덮어씌움
    for(int i = 0; i < length; i++) {
        a[i + left] = temp_array[i];
    }

    free(temp_array);
}

//// 2. Merge Sort implementation
void merge_sort(int a[], int left, int right) {

    int mid = (left + right) / 2;

    if( left >= right ) return;

    merge_sort(a, left, mid);
    merge_sort(a, mid + 1, right);
    helper_merge(a, left, mid, right);
}



// 퀵정렬
//// 1. Get pivot
int get_pivot(int a[], int start, int end) {

    int temp;
    int pivot = start;
    int left = start;
    int right = end;

    while (left < right) {
        while (a[pivot] >= a[left] && left < end) {
            left++;
        }

        while (a[pivot] < a[right]) {
            right--;
        }

        if (left < right) {
            temp = a[right];
            a[right] = a[left];
            a[left] = temp;
        }
    }

    temp = a[pivot];
    a[pivot] = a[right];
    a[right] = temp;

    return right;
}

//// 2. Quick sort implementation
void quick_sort(int a[], int start, int end) {

    int pivot;

    if (start < end) {
        pivot = get_pivot(a, start, end);
        quick_sort(a, start, pivot - 1);
        quick_sort(a, pivot + 1, end);
    }
}
