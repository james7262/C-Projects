// Include pre-processor directive.
#include "./headers/Functions.h"

/*
* This function has 3 parameters, all having char *. When you have a * in the type of a parameter,
* it means that the parameter is a pointer. Pointers refer to memory locations instead of holding
* values. Char * means the parameters refer to a memory location that would store a collection of
* characters. This is how C deals with strings, there is no string type in C; there is char *.
* You could have int *, float * or double *.
*/
void congratulate1 (char *student, char *course, char *programmer) {
    printf("%s has done as much %s programming as %s.\n", student, course, programmer);
}

// This function has 3 parameters and it also has a local variable.
void congratulate2 (char *student, char *course, char *programmer) {
    // Declare and initialize a local variable by calling the strlen function.
    int days = strlen(programmer);
    printf("%s has done as much %s programming as %s could fit into %d days.\n", student, course, programmer, days);
}

/*
* This Function has 1 parameter and will return a value. It will take a Celsius temperature, convert it to 
* Fahrenheit and return the Fahrenheit temperature.
*/
float fahrenheitFromCelsius (float celsius) {
    // Declare a local variable and intialize it using the macro expression.
    float fahrenheit = fahrenheit(celsius);
    // Return local variable.
    return fahrenheit;
}