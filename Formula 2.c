#include <stdio.h>

int main() {
    double momentum, wavelength;

    // Planck's constant in J·s
    double h = 6.626e-34;

    // Input momentum (in kg·m/s)
    printf("Enter the momentum (in kg·m/s): ");
    scanf("%lf", &momentum);

    // Calculate de Broglie wavelength
    wavelength = h / momentum;

    // Print the result
    printf("The de Broglie wavelength is: %.4e meters\n", wavelength);

    return 0;
}
