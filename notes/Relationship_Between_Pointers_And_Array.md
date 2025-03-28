## Relationship Between Pointers and Arrays

Arrays and Poitners are intimately related and often may be used interchangeably. You can think of an array names as a constant pointer to the array's first element. Pointers can be used to do any operation involving array subcripting.

int b[5];
int *bPtr;

Because the array name b (without subscript) is a pointer to the array's first element, we can set bPtr to the address of the array b's first element with the statement:

bPtr = b;

This is equivalent to taking the address of array b's first element as follows:

bPtr = &b[0];
