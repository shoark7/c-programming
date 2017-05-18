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

int get_coin_change(int change, int* coin_units, int unit_size) {
    int i, j;
    int number;
    printf("unit_size is %d\n", unit_size);
    int* cache = (int*) malloc((change+1) * unit_size);
    int answer;

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
    free(cache);

    if(answer == INFINITY) return -1;

    return answer;
}
