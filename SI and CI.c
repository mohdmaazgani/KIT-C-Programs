#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    
    // Calculate Simple Interest
    float simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simpleInterest);
    
    // Calculate Compound Interest
    float compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    printf("Compound Interest: %.2f\n", compoundInterest);
    
    return 0;
}
