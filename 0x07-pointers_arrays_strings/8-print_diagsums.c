#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - prints the sum of the two diagonals of a square
 *  matrix of integers.
 *  @a:
 *  @size:
 */
void print_diagsums(int *a, int size) {
    int i, sum_main = 0, sum_secondary = 0;
    for (i = 0; i < size; i++) {
        sum_main += a[i*size+i];
        sum_secondary += a[(i+1)*size-i-1];
    }
    printf("Sum of main diagonal: %d\n", sum_main);
    printf("Sum of secondary diagonal: %d\n", sum_secondary);
}
