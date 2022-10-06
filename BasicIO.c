// Include header file.
#include "./headers/BasicIO.h"

// Write the code for the functions declared in the header file.

// This function will use printf and puts to output data to stdout (terminal).
void output (void) {
    // printf formats and outputs a series of characters and values to stdout.
    // It does not append a new line character to the end of its output.
    printf("Your first name is %s\n", FIRST_NAME);
    printf("Your last name is %s\n", LAST_NAME);
    printf("Your weight is %f and your age is %d\n", WEIGHT, AGE);

    // puts outputs a string (char *) to stdout. It does append a new line character
    // to the end of its output.
    puts(FIRST_NAME);
    puts(LAST_NAME);
}

// This function will use scanf to input data from stdin (keyboard).
void input (void) {
    // Declare variables to store input data.
    int age;
    float weight;
    char name[] = "";

    // Input an integer.
    printf("Enter your age: ");
    // scanf reads the value from stdin per the type specified in the format specifier
    // and stores it in the address of the specified variable.
    scanf("%d", &age);
    printf("Entered age is: %d", age);

    // Input a float.
    printf("\nEnter your weight: ");
    scanf("%f", &weight);
    printf("Entered weight is: %.2f", weight);

    // Input a string (char *).
    printf("\nEnter your name: ");
    scanf("%s", &name);
    printf("Entered name is: %s", name);

}