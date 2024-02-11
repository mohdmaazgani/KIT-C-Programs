#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong or not
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;
    originalNum = num;

    // store the number of digits of num in n
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // check if a number is Armstrong or not
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1; // Number is Armstrong
    else
        return 0; // Number is not Armstrong
}

int main() {
    int start, end;
    
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; ++i) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
