// Include header file.
#include "./headers/Decisions.h" 

// Write the code for the functions defined in the header file.

// This function will use the comparison operators, and the if, if-else,
// if-else-if statements.
void decisions1 (void) {
    // Declare a variable of type float, initialize it using constant
    // defined in header file.
    float num = NUM;

    // Use if statement.
    if (num < 40000.0) {
        printf("Num (%.2f) is less than 40000.0.\n", num);
    }
}