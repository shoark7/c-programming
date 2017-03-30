/* 과제 2 - 2 * 경영학과 201101328 박성환
 *
 * 6가지 정렬 알고리즘을 구현하여 실행 성능을 비교한다.
 *
 * Selection, Bubble, Insertion, Shell, Merge, Quick
 *
 * 구현 날짜:
 *      2017/03/28
 *
 * All rights are not reserved.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort_collections_2.h"


int main(void)
{
    // 실험 환경 세팅
    srand(time(NULL));
    int *original_arr;
    int tries[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    int try_size = sizeof(tries) / sizeof(int);
    int *temp_arr;
    int sort_size = 6;
    int* (*sort_algorithms[])(int[], int, int) = {selection_sort, bubble_sort, insertion_sort, shell_sort,
                                                  merge_sort, quick_sort};

    char *sort_way[] = {"선택정렬", "버블정렬", "삽입정렬", "쉘정렬", "병합정렬", "퀵정렬"};


    printf("경영학과 201101328 박성환\n\n");
    printf("과제 2-2: 6가지 정렬이 실행 성능을 비교.\n");
    printf("--------------------------------------------------\n\n");


    // 각 실험  진행
    for (int i = 0; i < sort_size; i++) { // 정렬 방법 전환
        printf("********************** %s **********************\n\n", sort_way[i]);

        for (int j = 0; j < try_size; j++) {    // 시험 횟수 전환

            original_arr = (int*) malloc(sizeof(int) * tries[j]);
            temp_arr = (int*) malloc(sizeof(int) * tries[j]);

            for (int k = 0; k < tries[j]; k++) {       // 랜덤 배열 초기화
                original_arr[k] = rand() % 1000 + 1;   // 정수 범위는 1 ~ 1000
                temp_arr[k] = original_arr[k];
            }

        int* ptr = sort_algorithms[i](temp_arr, 0, tries[j] - 1); // 정렬 시행
        printf("size : %5d, compare : %10d, move : %10d\n", tries[j], ptr[0], ptr[1]);

        free(original_arr);
        free(temp_arr);
        }

        printf("\n\n");
    }

    return 0;
}
