#include <stdio.h>

// Function to calculate the length of a string
int strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to concatenate two strings
void strcat(char *dest, const char *src) {
    int dest_len = strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
}

// Function to compare two strings
int strcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 0;  // strings are equal
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "world!";
    
    printf("Length of str1: %d\n", strlen(str1));
    
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    printf("Comparison result: %d\n", strcmp("hello", "world"));
    
    return 0;
}
