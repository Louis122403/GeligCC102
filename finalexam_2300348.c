// Name: CHRISITAN LOUIS GELIG
// Student ID: 2300348
// Description: Program prints a right-aligned triangle of numbers based on my U value = 3.

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
