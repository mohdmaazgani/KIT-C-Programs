#include <stdio.h>
#include <math.h>

int main() {
    double initial_wavelength, final_wavelength, wavelength_shift, theta_rad;

    // Constants
    double h = 6.626e-34;  // Planck's constant in J·s
    double m_e = 9.109e-31;  // Mass of the electron in kg
    double c = 3.0e8;  // Speed of light in m/s

    // Input initial wavelength (in meters)
    printf("Enter the initial wavelength (in meters): ");
    scanf("%lf", &initial_wavelength);

    // Input scattering angle in degrees
    printf("Enter the scattering angle in degrees: ");
    scanf("%lf", &theta_rad);
    theta_rad = theta_rad * M_PI / 180;  // Convert angle to radians

    // Calculate wavelength shift
    wavelength_shift = (h / (m_e * c)) * (1 - cos(theta_rad));

    // Calculate final wavelength
    final_wavelength = initial_wavelength + wavelength_shift;

    // Print the result
    printf("The wavelength shift is: %.4e meters\n", wavelength_shift);
    printf("The final wavelength is: %.4e meters\n", final_wavelength);

    return 0;
}
