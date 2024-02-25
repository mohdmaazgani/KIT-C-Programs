#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int* numbers;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory dynamically
    numbers = (int*)malloc(size * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    // Free the dynamically allocated memory
    free(numbers);

    return 0;
}
