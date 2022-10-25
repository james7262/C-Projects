// Include pre-processor directive.
#include "./headers/AssignmentC.h"

/* write function for question 1 */
int genPower (int n, int p) {
    int total;
    int temp = n;
    for (int i = 1; powerCondition(i); i++) {
        total = temp * n;
        temp = total;
    }
    return total;
}

/* write function for question 2 */
int genPowerReference (int *n, int *p) {
    int total;
    int *temp = &n;
    for (int i = 1; powerCondition(i); i++) {
        total = temp * &n;
        temp = total;
    }
    return total;
}
