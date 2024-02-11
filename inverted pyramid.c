#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows for the inverted pyramid: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        // Print spaces
        for (space = 0; space < rows - i; space++)
            printf(" ");

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++)
            printf("|");

        printf("\n");
    }

    return 0;
}
