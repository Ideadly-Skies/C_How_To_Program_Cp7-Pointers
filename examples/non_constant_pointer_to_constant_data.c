// fig07_07.c
// printing a string one at a time using
// a non-constant pointer to constant data
#include <stdio.h>

void printCharacters(const char *sPtr);

int main(void){
    // initialize char array
    char string[] = "print characters of a string";

    puts("The string is:");
    printCharacters(string);
    puts("");
}

// sPtr cannot be used modify the character to which it points,
// i.e., sPtr is a "read-only" pointer
void printCharacters(const char *sPtr){
    for ( ; *sPtr ; ++sPtr) {
        printf("%c", *sPtr);
    }
}