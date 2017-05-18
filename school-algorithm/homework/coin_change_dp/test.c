/* * * * * * * *
 * */

#include <stdio.h>
#include <stdlib.h>
#include "coin_change_dp.h"

int main(void) {
    int answer;

    int test_units[] = {500, 180, 100, 50, 10, 1};

    answer = get_coin_change(200, test_units, 5);
    printf("Answer is %d\n", answer);
}
