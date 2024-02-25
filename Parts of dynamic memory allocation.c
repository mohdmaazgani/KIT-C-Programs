#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numbers = (int*)calloc(5, sizeof(int)); // Allocating memory for 5 integers

    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assigning values to the allocated memory
    for (int i = 0; i < 5; i++) {
        numbers[i] = i + 1;
    }

    // Printing the values
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Reallocating memory for 10 integers
    int* moreNumbers = (int*)realloc(numbers, 10 * sizeof(int));

    if (moreNumbers == NULL) {
        printf("Memory reallocation failed\n");
        free(numbers); // Freeing the previously allocated memory
        return 1;
    }

    // Assigning values to the reallocated memory
    for (int i = 5; i < 10; i++) {
        moreNumbers[i] = i + 1;
    }

    // Printing the values
    for (int i = 0; i < 10; i++) {
        printf("%d ", moreNumbers[i]);
    }
    printf("\n");

    free(moreNumbers); // Freeing the allocated memory

    return 0;
}
