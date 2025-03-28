// fig07_09.c
// Attempting to modify a constant pointer to a non-constant data
#include <stdio.h>

int main(void){
    int x = 0;
    int y = 0;

    // ptr is a constant pointer to an integer that can be modified
    // through ptr, but ptr always points to the same memory location
    int * const ptr = &x;

    printf("before the change: %d\n", x);
    *ptr = 7; // allowed: *ptr is not const
    printf("after the change: %d\n", x);    

    // ptr = &y; // error: ptr is const; cannot assign new address

    return (0);
}