/* Get least number of coins with given change in DP
 *
 *                      201101328 B.A. Sunghwan Park
 * --------------------------------------------------
 *
 * change must be an integer over 0.
 * coin_units must be an array containing integers.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define INFINITY 1000000


// Function declaration
int get_coin_change(int change, int* coin_units, int unit_size);
void print_coin_change(int* cache, int size);

// get_coin_change Function
//// Get minimum number of coins
int get_coin_change(int change, int* coin_units, int unit_size) {
    int i, j;
    int number;
    int cache[1000];
    int answer;
    int count;

    cache[0] = 0;
    for(i = 1; i <= change; i++) {
        cache[i] = INFINITY;
    }

    for(i = 1; i <= change; i++) {
        number = INFINITY;
        for(j = 0; j < unit_size; j++) {
            if(i >= coin_units[j]) {
                number = (number <= cache[i - coin_units[j]] + 1) ? (number) : (cache[i - coin_units[j]] + 1);
            }
        }
	cache[i] = number;
    }

    answer = cache[change];
    print_coin_change(cache, change);

    if(answer == INFINITY) return -1;

    return answer;
}


// Print coin change
//// Print from 1 to given change
void print_coin_change(int* cache, int size) {
    int iter_length = (size % 20 == 0)? size / 20: size / 20 + 1;
    int i, j;
    if(cache[size] == INFINITY) {
	printf("\n\nWe cannot make up money you want..\n");
	return;
    }
    for(i = 0; i < iter_length; i++) {
	printf("\n\nJ =  ");
	for(j = i*20 + 1; j <= i*20 + 20; j++) {
	    if(j > size) return;
	    printf("%3d  ", j);
	}
	printf("\nC =  ");
	for(j = i*20 + 1; j <= i*20 + 20; j++) {
	    printf("%3d  ", cache[j]);
	}
    }
}









