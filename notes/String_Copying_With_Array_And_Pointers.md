## String Copying With Arrays and Pointers

To further illustrate array and pointer interchangeability, let's look at two string copying functions - copy1 and copy2 - in Fig 7.15. Both functions copy a string into a character array, but they're implemented differently.

### Copying with Array Subcript Notation

Function copy1 uses array subscript notation to copy the string in s2 to the character array s1. the function defines counter variable i as the array subcript. The for statement header (line 26). The for statement header (line 26) performs the entire copy operation. The statement's body is the empty statement. The header specifies that i is initialized to zero and incremented by one during each iteration. The expression s1[i] = s2[i] copies onec character from s2 to s1. When the null character is encountered in s2, it's assigned to s1. Since the assignment's value is what gets assigned to the left operand (s1), the loop terminates when an element of s1 receives the null character, which has the value 0 and therefore is false.

### Copying with Pointers and Pointer Arithmetic

Function copy2 uses pointers and pointer arithmetic to copy the string in s2 to the character array s1. Again, the for statement header (line 34) performs the copy operation. The header does not include