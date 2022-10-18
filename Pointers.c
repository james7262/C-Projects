// Inlcude pre-processor directive.
#include "./headers/Pointers.h"

/* 
 * Each variable and function gets stored in memory (in the stack). The location in memory
 * to where it is stored is referred to as its address. Unlike other variables that store values
 * of a certain type (like int, float, etc.), a pointer is a variable that stores an address.
 * An integer variable stores an integer value. An integer pointer stores the address of an integer
 * variable. We can have pointers to characters, integers, doubles, etc. We can even have 
 * pointers to functions. Pointers get stored in the heap.
 */

/* This function prints the address of itself. */
void printAddress (void) {
    // The %p format specifier used in the format string is a placeholder for an address.
    printf("The printAddress function is stored at %p\n", printAddress);
}

/* This function returns the address of the global variable i. */
int * getAddress (void) {
    // Declare a pointer to an integer. The star is needed when declaring a pointer.
    int *ptr;

    // Get the address of the global variable i and store it in a pointer.
    ptr = &i; 

    // Return pointer. The star is not needed when using an address in a pointer.
    return (ptr);
}

/* This function returns the value stored in the global variable i. */
int getDataAtAddress (void) {
    // Declare a pointer to an integer. The star is needed when declaring a pointer.
    int *ptr;

    // Get the address of the global variable i and store it in a pointer.
    // Must use the & when accessing an address of a variable the star is not needed when storing an address in a pointer.
    ptr = &i; 

    // Return pointer. The star is needed when accessing a value at an address in particular.
    return (*ptr);
}