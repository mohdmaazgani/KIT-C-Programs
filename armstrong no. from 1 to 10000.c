#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1;
    else
        return 0;
}

int main() {
    int i;

    printf("Armstrong numbers from 1 to 10000:\n");

    for (i = 1; i <= 10000; ++i) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}
