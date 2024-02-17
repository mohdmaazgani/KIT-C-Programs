#include <stdio.h>

int main() {
    char c;
    
    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &c);
    
    // Print the ASCII value of the character
    printf("ASCII value of %c is %d\n", c, c);
    
    return 0;
}
