/* Coin change algorithm in c
 *
 * 201101328 B.A. 박성환
 *
 * Implement coin change algorithm with greedy algorithm.
 * Unit of coins : 500, 100, 50, 10, 1
 *
 *  Execution state should be like this.
 *
 * """
 * Coin Exchange (Greedy Algorithm) 201101328 박성환
 * Enter Change: 932
 * (500) (100) (100) (100) (100) (10) (10) (10) (1) (1)
 * Total # of coins = 10
 *
 * ...
 * """
 *
 * All rights are not reserved.
 */


#include <ctype.h>
#include <stdio.h>


// coin_change is the main algorithm and the others are helpers.
int coin_change(int change);
void count_coin(int *change, int coin_unit, int *count_unit);
void print_coin(int coin_unit, int *count_unit);


// Entry point function.
int main(void)
{
    int change;

    printf("Coin Exchange (Greedy Algorithm) 201101328 박성환\n");
    printf("Press 0 to exit\n\n");

    while(1) {
        printf("Enter Change: ");
        scanf("%d", &change);
        if(change != 0)
            coin_change(change);
        else {
            printf("Program exited...");
            break;
        }
    }
    printf("Program exited.\n");
    return 0;
}


// Count number of each coin units.(e.g. 500, 100, ..)
void count_coin(int *change, int coin_unit, int *count_unit){

    while(*change >= coin_unit)
    {
        *change -= coin_unit;
        (*count_unit)++;
    }
}


// Print coin numbers as symbols.(e.g. (500), (100), ..)
void print_coin(int coin_unit, int *count_unit){

    int i;
    int count = 0;
    for(i = 0;i < *count_unit; i++)
    {
        printf(" (%d) ", coin_unit);
    }
}


// Main coin change algorithm.
int coin_change(int change){

    int i;
    int coin_unit_set[] = {16, 10, 5, 1};
    int coin_set_size = 4;
    int coin_count_set[6] = {0};
    int total_number = 0;

    for(i = 0; i < coin_set_size; i++)
    {
        count_coin(&change, coin_unit_set[i], &coin_count_set[i]);
        print_coin(coin_unit_set[i], &coin_count_set[i]);
    }

    for(i = 0; i < coin_set_size; i++)
        total_number += coin_count_set[i];

    printf("\nTotal # of coins = %d\n\n", total_number);
}
