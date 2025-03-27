// fig07_03.c
// Cube a variable using pass-by-reference with a pointer argument.
#include <stdio.h>

// pass in memory address of pointer
void cubeByReference(int *nPtr);

// main function begins function execution
int main(void) {
    int number = 5; // initialize number

    printf("The original value of number is %d\n", number);
    cubeByReference(&number); 
    printf("The new value of number is %d\n", number);
}

// calculate cube of *nPtr actually modifies number in main
void cubeByReference(int *nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}