#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Open the file in write mode
    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Write data to the file
    fprintf(file, "Hello, World!");

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Read data from the file
    fgets(data, sizeof(data), file);

    // Print the data
    printf("Data from the file: %s\n", data);

    // Close the file
    fclose(file);

    return 0;
}
