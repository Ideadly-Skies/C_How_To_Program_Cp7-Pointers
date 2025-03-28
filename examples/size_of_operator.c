// fig07_12.c
// applying sizeof to an array name returns
// the number of bytes in the array
#include <stdio.h>
#define SIZE 20

size_t getSize(const float *ptr); // prototype

int main(void){
    // create an array
    float array[SIZE];

    // get the number of bytes of the array
    printf("Number of bytes in the array is %zu\n", sizeof(array));
    printf("Number of bytes returned by getSize is %zu\n", getSize(array));

    // return statement
    return (0);
}

// return the size of the pointer - older machine would return 4 bytes
size_t getSize(const float *ptr){
    return sizeof(ptr);
}