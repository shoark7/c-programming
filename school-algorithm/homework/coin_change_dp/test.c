/* Main test file for coin change in DP.
 *
 *              201101328 B.A. Sunghwan Park
 * -------------------------------------------
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "coin_change_dp.h"

// Main test file
int main(void) {
    int answer;
    int unit_size;
    int coin_units[1000];
    int change;
    int i = 0;
    int var;
    char sep[] = " ";
    char token_string[1000];
    char* token;

    printf("Coin Exchange(동적 계획 알고리즘) 201101328 박성환\n\n");
    while(1) {
        printf("\n---------------------------------------\n");
        printf("동전의 종류(0 입력시 종료): ");
        scanf("%d", &unit_size);
        getchar();
        if(unit_size == 0) break;

        printf("\n동전의 액면가(내림차순): ");
        fgets(token_string, 1000, stdin);

        token = strtok(token_string, sep);
        while(token != NULL) {
            sscanf(token, "%d", &var);
            coin_units[i++] = var;
            token = strtok(NULL, sep);
        }

        printf("거스름돈 액수: ");
        scanf("%d", &change);

        answer = get_coin_change(change, coin_units, unit_size);
        if(answer == -1) printf("\n\n동전을 만들 수 없습니다.");
        else printf("\n\n거스름돈 동전의 최소 개수 = %d\n", answer);
    }

    printf("Program Exited...\n");
}
