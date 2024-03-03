#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

int main() {
    int num1 = 10;
    int num2 = 20;

    int maxNum = MAX(num1, num2);
    printf("The maximum number is: %d\n", maxNum);

    int squaredNum = SQUARE(num1);
    printf("The square of %d is: %d\n", num1, squaredNum);

    return 0;
}