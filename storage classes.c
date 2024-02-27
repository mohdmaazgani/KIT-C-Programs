#include <stdio.h>

// Global variable with external linkage
int globalVariable = 10;

// Function with static storage class
void staticFunction() {
    static int staticVariable = 5; // Static variable retains its value between function calls
    printf("Static variable: %d\n", staticVariable);
    staticVariable++;
}

int main() {
    // Automatic variable
    int autoVariable = 20;

    // Register variable
    register int registerVariable = 30;

    // Static variable
    static int staticVariable = 40; // Static variable retains its value throughout program execution

    printf("Global variable: %d\n", globalVariable);
    printf("Automatic variable: %d\n", autoVariable);
    printf("Register variable: %d\n", registerVariable);
    printf("Static variable: %d\n", staticVariable);

    staticFunction();
    staticFunction();

    return 0;
}
