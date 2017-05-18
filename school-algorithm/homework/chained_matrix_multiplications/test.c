/* Chained matrix multiplication test file
 *
 * In this test,
 * I check if the algorithm works fine.
 *
 * 201101328 B.A. Sunghwan Park
 *
 * All rights are not reserved.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "chained_matrix_multiplications.h"


int main(void)
{
    // Preparation for the test
    //  : Set variables and get dimensions of the chained matrix.

    int size;
    int index;
    long *dims = (long*) malloc(sizeof(long) * (size+1));
    char delim[] = " ";
    int i, j;
    long answer;
    long answer2;
    long value;
    char *temp_str;

    char parse_me[1000];
    char *token;

    printf("Chained Matrix Multiplications 201101328 박성환\n\n");
    printf("# of Matrices : ");

    scanf("%d", &size);
    getchar(); // because of using scanf and fgets together.

    // Size validation
    if(size > 1) printf("\nEnter d0 d1 ... d%d : \n", size);
    else if(size == 1) printf("\n Enter do d1\n");
    else {
        printf("Size must be equal to or greater than 0");
        exit(0); }

    fgets(parse_me, 1000, stdin);
    parse_me[strlen(parse_me)-1] = '\0';
    // Changing last value from \n to \0 to indicate the end of the string.

    token = strtok(parse_me, delim);
    dims[index++] = strtol(token, &temp_str, 10);

    // Parsing the string and making it to integer and put in ther list.
    while(1) {
        token = strtok(NULL, delim);
        if(token == NULL) break;
        value = strtol(token, &temp_str, 10);
        dims[index++] = value;
    }


    // Test!!!
    printf("Problem is ");
    for(i = 0; i < size; i++) {
        printf("[%ld:%ld]", dims[i], dims[i+1]);
        if(i != size - 1) {
            printf("x");
        }
    }

    printf("\n\n  C   [ 1 ] [ 2 ] [ 3 ] [ 4 ]");
    answer = chained_matrix_multiplication(dims, size);
    answer2 = answer;
    // If not using second answer variable like this, answer is 0. WHY????????
    printf("\nFinal solution is %ld\n", answer2);

    free(dims);
}
