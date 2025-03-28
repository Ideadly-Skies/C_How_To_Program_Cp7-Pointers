// fig07_06.c
// Converting a string to uppercase using a
// non-constant pointer to a non-constant data
#include <ctype.h>
#include <stdio.h>

void convertToUppercase(char *sPtr); // prototype

int main(void){
    char string[] = "characters and $32.98"; // initialize char array

    printf("The string before the conversion is: %s\n", string);
    convertToUppercase(string);
    printf("The string after the conversion is: %s\n", string);
}

// convert string to uppercase letter
void convertToUppercase(char *sPtr) {
    while (*sPtr != '\0'){ 
        *sPtr = toupper(*sPtr); // convert to character
        ++sPtr;
    }
}