/* Chained matrix multiplication algorithm written in C.
 *
 *   In this algorithm, we consider sequence of matrices
 *   as arrays of row and column dimensions.  *
 *   For example, when we have (30x20) x (20x10) x (10x15) matrix,
 *   its form for input is {30, 20, 10, 15}.
 *
 *   Return is least number of multiplication.
 *
 *
 * 201101328 B.A. Sunghwan Park
 *
 * All rights are not reserved.
 */


#include <stdlib.h>
#include <stdio.h>


long chained_matrix_multiplication(long dims[], int size) {
    /* Get least number of matrix multiplication
     *
     * input:
     *    dims[] : array of row and column sequence.
     *    size   : size of the matrix, not dims.
     * return:
     *    number of least multiplication of matrices.
     */

    long temp;
    int i, j, k;
    long mul_depth;

    long *matrix[size+1];

    for(i = 1; i <= size; i++) {
        matrix[i] = (long*) malloc((size + 1) * sizeof(long));
    }
    // I made a 2d array.
    // Reason of making matrix size bigger than 'size' is
    // that we use value 1-based-array, not 0-based one.

    for(i = 1; i <= size; i++) {

        for(j = 1; j <= size; j++)
            matrix[i][j] = 0;
        // Initilize matrix with 0.
    }

    for(mul_depth = 1; mul_depth < size; mul_depth++) {
        // mul_depth is multiplication depth.
        // If it is 1, cals are like (10x20), (20x30)
        // if it is 2, cals are like (10x20x30), (10x20x10)

        for(i = 1; i <= size - mul_depth; i++) {
            j = i + mul_depth;
            matrix[i][j] = 100000000l;

            for(k = i; k < j; k++) {
                temp = dims[i-1] * dims[k] * dims[j] + matrix[i][k] + matrix[k+1][j];
                if(temp < matrix[i][j]) {
                    matrix[i][j] = temp;
                }
            }
        }
    }

    long value = matrix[1][size];

    for(i = 1; i <= size; i++) {
        printf("\n[ %d ]", i);
        for(j = 1; j <= size; j++) {
            printf("%6.1ld", matrix[i][j]);
        }
    }
    printf("\n");

    for(i = 1; i <= size; i++) {
        free(matrix[i]);
    }


    return value;
}
