// Include pre-processor directive.
#include "./headers/Loops.h"

// This function will use a while loop.
void loops1 (void) {
    // Declare loop counter variable and initialize it.
    int i = START;

    // Set up while loop.
    // Use macro expression as condition of while loop.
    while (condition(i)) {
        printf ("%d ", i);
        i--;
    }
    printf("Blastoff!\n");
}

// This function will use a do-while loop.
void loops2 (void) {
    // Declare a loop counter variable and initialize it.
    int i = START;

    // Set up do-while loop.
    do {
        printf ("%d ", i);
        i--;
    } while (condition(i)); // Use macro expression as a condition of do-while loop.
    printf("Blastoff!\n");
}

// This function uses a for loop. 
void loops3 (void) {
    // Declare loop counter variable.
    int i;

    // Set up for loop.
    // Use macro expression as the condition for the for loop.
    for (int i = START; condition(i); i--) {
        printf("%d ", i);
    }
    printf("Blastoff!\n");
}

// This function uses a break statement to terminate a loop.
void loops4 (void) {
    // Declare loop counter variable.
    int i;

    // Set up for loop.
    // Use macro expression as the condition for the for loop.
    for (int i = START; condition(i); i--) {
        printf("%d ", i);
        // Use macro expression as condition of if statement.
        if (break(i)) {
            // Terminate loop.
            break;
        }
    }
    printf("Early Blastoff!\n");
}

// This function uses a continue statement to skip the current iteration of a loop.
void loops5 (void) {
    // Declare loop counter variable.
    int i;

    // Set up for loop.
    // Use macro expression as the condition for the for loop.
    for (int i = START; condition(i); i--) { 
        // Use macro expression as condition of if statement.
        if (continue(i) != 0) {
            // Skip current iteration of loop.
            continue;
        }
        printf("%d ", i);
    }
    printf("Even Blastoff!\n");
}