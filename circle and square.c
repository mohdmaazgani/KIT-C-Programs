#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, side;
    float circleArea, circlePerimeter, squareArea, squarePerimeter;

    // Input for circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate circle area and perimeter
    circleArea = PI * radius * radius;
    circlePerimeter = 2 * PI * radius;

    // Input for square
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate square area and perimeter
    squareArea = side * side;
    squarePerimeter = 4 * side;

    // Output the results
    printf("Circle:\n");
    printf("Area: %.2f\n", circleArea);
    printf("Perimeter: %.2f\n", circlePerimeter);

    printf("Square:\n");
    printf("Area: %.2f\n", squareArea);
    printf("Perimeter: %.2f\n", squarePerimeter);

    return 0;
}
