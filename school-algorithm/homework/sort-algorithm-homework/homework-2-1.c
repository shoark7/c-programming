/* 과제 2 - 1
 * 경영학과 201101328 박성환
 *
 * 6가지 정렬 알고리즘을 구현하여 올바르게 동작하는지 확인한다.
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
#include "sort_collections.h"

#define LENGTH 12

int main(void)
{
    // 실험 환경 세팅
    srand(time(NULL));
    int original_arr[LENGTH];
    int temp_arr[LENGTH];
    int sort_size = 6;
    void (*sort_algorithms[])(int[], int, int) = {selection_sort, bubble_sort,
                                                  insertion_sort, shell_sort,
                                                  merge_sort, quick_sort};

    char *sort_way[] = {"선택정렬", "버블정렬", "삽입정렬", "쉘정렬", "병합정렬", "퀵정렬"};

    for (int i = 0; i < LENGTH; i++) { // 랜덤 배열 초기화
        original_arr[i] = rand() % 1000 + 1; // 정수 범위는 1 ~ 1000
    }


    printf("경영학과 201101328 박성환\n\n");
    printf("과제 2-1: 6가지 정렬이 올바르게 작동하는지 확인.\n");
    printf("-----------------------------------------------\n\n");


    // 각 실험 진행
    for (int i = 0; i < sort_size; i++) {  // 각 정렬 횟수만큼 반복

        for (int j = 0; j < LENGTH; j++) { // 실험 배열 초기화
            temp_arr[j] = original_arr[j];
        }

        printf("%s\n", sort_way[i]);
        for (int k = 0; k < LENGTH; k++) {
            printf("%d ", original_arr[k]);
        }
        printf("\n");

        sort_algorithms[i](temp_arr, 0, LENGTH - 1);

        for (int k = 0; k < LENGTH; k++) {
            printf("%d ", temp_arr[k]);
        }

        printf("\n\n");

    }

    return 0;
}
