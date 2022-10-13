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
        printf("Num (%.2f) is less than 40000.0.\n", num); // Displayed.
    }
    num += num;

    // Use if-else statement.
    if (num < 40000.0) {
        printf("Num (%.2f) is less than 40000.0.\n", num); // Not displayed.
    } else {
        printf("Num (%.2f) is not less than 40000.0.\n", num); // Displayed.

    }
    num = 0.0;

    // Use if-else-if statement.
    if (num == 0.0) {
        printf("Num (%.2f) is equal to 0.0.\n", num); // Displayed.
    } else if (num < 40000.0) {
        printf("Num (%.2f) is less than 40000.0.\n", num); // Not displayed.
    } else {
        printf("Num (%.2f) is not less than 40000.0 and is not equal to 0.0.\n", num); // Not displayed.
    }
}

/* This function will use the logical operators (&&, ||, !)*/
void decisions2 (void) {
    // Declare a variable of type float. Initialize it using constant defined in header file.
    float num = NUM;

    // Use the logical AND operator, both conditions must be true.
    if (num > 0.0 && num < 40000.0) {
        printf("Num (%.2f) is between 0.0 and 40000.0\n", num); // Displayed.
    }

    // Use the logical OR operator, only one condition must be true.
    if (num > 0.0 || num < 40000.0) {
        printf("Num (%.2f) is greater than 0.0 or less than 40000.0\n", num); // Displayed.
    }

    // Use the logical NOT operator, it inverses the boolean value.
    if (!(num > 0.0 && num < 40000.0)) {
        printf("Num (%.2f) is not between 0.0 and 40000.0\n", num); // Not displayed.
    }
}

/* This function will use a bool variable.*/
void decisions3 (void) {
    // Declare a varibale type float. Initialize it using constant defined in header file.
    float num = NUM;

    // Declare a variable of type bool and intialize it.
    bool isNotBetween = !(num > 0.0 && num < 40000.0); // False.

    // Use bool variable in an if-else statement.
    if (isNotBetween) {
        printf("Num (%.2f) is not between 0.0 and 40000.0\n", num); // Not displayed.
    } else {
        printf("Num (%.2f) is  between 0.0 and 40000.0\n", num); // Displayed.
    }
}

/* This function will use the ternary operator.*/
void decisions4 (void) {
    // Declare a variable of type float. Initialize it using the constant defined in header file.
    float num = NUM;

    // Declare a variable of type bool and initialize it.
    bool isNotBetween = !(num > 0.0 && num < 40000.0); // False.

    // Declare a varibale of type float and initialize it using the ternary operator.
    // The ternary operator is the only operator that has three operands.
    float extra = isNotBetween ? (num - 40000.0) : 0.0; // Operand 3 will be returned.

    // Display the value in extra.
    printf("Extra is %.2f\n", extra); // 0.0 will be displayed.
}

/* This function will use a switch statement.*/
void decisions5 (void) {
    // Declare variables.
    char operation;
    int num1;
    int num2;

    // Input operation.
    printf("Enter operation to be performed (+, -, *, /): ");
    scanf ("%c", &operation);

    // Input numbers.
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Use switch statement to evaluate operation.
    switch (operation) 
    {
    case '+': 
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-': 
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*': 
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/': 
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid operation!\n");
        break;
    }
}

/* This function will examine short circuit evaluation - the compiler skips the evaluation of 
sub-expressions in a logical expression. */
void decisions6 (void) {
    // Declare variables that will be used in logical expression.
    int x = 1;
    bool y = true;

    // Since x == 1 is true, the second expression is evaluated, short circuit evaluation will not happen.
    if (x == 1 && y) {
        printf("If block executed.\n"); // Displayed.
    } else {
        printf("Else block executed.\n");
    }

    // Since x == 2 is false, the second expression is not evaluated, short circuit evaluation will happen.
    if (x == 2 && y) {
        printf("If block executed.\n"); 
    } else {
        printf("Else block executed.\n"); // Displayed.
    }

    y = false;

    // Since x != 1 is false, the second expression is evaluated, short circuit evaluation will not happen.
    if (x != 1 || y) {
        printf("If block executed.\n"); .
    } else {
        printf("Else block executed.\n"); // Displayed.
    }

    // Since x == 1 is true, the second expression is not evaluated, short circuit evaluation will happen.
    if (x == 1 || y) {
        printf("If block executed.\n"); // Displayed.
    } else {
        printf("Else block executed.\n");
    }
}

