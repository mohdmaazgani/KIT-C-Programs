#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversedNum = reverseNumber(num);
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}
