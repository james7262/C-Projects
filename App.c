// Include pre-processor directives.
#include <stdio.h>
#include <stdlib.h>

// Include header file.
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Pointers.h"
#include "./headers/AssignmentC.h"

int main(void) {
    // puts("Hello World!!!");

    // Testing Basic IO Functionality.
    // output();
    // input();

    // Testings Decisions Functionality.
    // decisions1();  
    // decisions2();
    // decisions3();
    // decisions4();
    // decisions5();
    // decisions6();

    // Testing Loops Functionality.
    // loops1();
    // loops2();
    // loops3();
    // loops4();
    // loops5();

    // Testing Functions functionality
    //char student[] = "James";
    //char course[] = "Ruby";
    //char programmer[] = "Yukihiro Matsumoto";
    //congratulate1(student, course, programmer);
    //congratulate2(student, course, programmer);
    //printf("%.2f degrees celsius = %.2f degrees farenheit\n",
    //     0.0, farenheitFromCelsius(0.0));
    //printf("%.2f degrees celsius = %.2f degrees farenheit\n",
    //     100.0, farenheitFromCelsius(100.0));

    // Testing Pointers Functionality
    //printAddress();
    //printf("The global variable i stores its value at %p\n", getAddress());
    //printf("The global static variable i stores %d\n", getDataAtAddress());

    // Testing AssignmentC functionality
    int n = 4;
    int p = 3;
    
    printf("Power - Normal Variables\n");
    printf("%d taken to the power of %d is %d\n", n, p, genPower(n, p));
    
    printf("Power - Pointer Variables\n");
    printf("%d taken to the power of %d is %d\n", n, p, genPowerReference(n, p));
}