#include <stdio.h>

// Define the structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Create an instance of the structure
    struct Person person1;

    // Assign values to the structure members
    strcpy(person1.name, "John");
    person1.age = 25;
    person1.height = 1.75;

    // Print the values of the structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
