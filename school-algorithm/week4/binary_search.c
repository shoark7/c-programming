/* Binary Search algorithm
 *
 * 2017/03/21 - Sunghwan Park
 * All rights are not reserved.
 */

#include <stdio.h>

int binary_search(int a[], int value, int start, int end){
    // We assume array a is ordered.
    // If we cannot find value in a, return -1 instead of index.
    if (start > end) return -1;

    int mid = (start + end) / 2;

    if (a[mid] > value){
        return binary_search(a, value, start, mid - 1);
    }
    else if (a[mid] == value) {
        return mid;
    }
    else {
        return binary_search(a, value, mid + 1, end);
    }
}

int main(void)
{
    int k[] = {3,4,5,6,7,8,9};

    printf("2 is at %d\n", binary_search(k, 2, 0, 6));
    printf("3 is at %d\n", binary_search(k, 3, 0, 6));
    printf("4 is at %d\n", binary_search(k, 4, 0, 6));
    printf("9 is at %d\n", binary_search(k, 9, 0, 6));
    printf("10 is at %d\n", binary_search(k, 10, 0, 6));

    return 0;
}
