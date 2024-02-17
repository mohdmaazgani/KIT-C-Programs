#include <stdio.h>

int main() {
    char str[100];
    int sum = 0;
    
    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Calculate the sum of ASCII values of characters in the string
    for (int i = 0; str[i] != '\0'; i++) {
        sum += str[i];
    }
    
    // Print the sum
    printf("Sum of ASCII values: %d\n", sum);
    
    return 0;
}
