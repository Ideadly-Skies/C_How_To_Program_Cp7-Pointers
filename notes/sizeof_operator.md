## sizeof operator

C provides the unary operator sizeof to detemrine an obejct's or type's size in bytes.

This operator is applied at compile time unless its operand is a variable-length array (VLA). When applied to an array's names as in Fig 7.12 (line 12), sizeof returns as size_t value the array's total number of bytes.

### Determining the number of elements from sizeof operator

The number of elements in an array also can be determined with sizeof. 

<!-- variables of type double are stored in eight bytes of memory -->
<!-- thus the array real contains 176 bytes -->
double real[22];
number_of_elements = sizeof(real) / sizeof(real[0])

You can apply sizeof to any variable name, type or value (including the value of an expression).

When applied to a variable name (that's not an array name) or a constant, the number of bytes used to store
the specific type of variable or constant is returned.

The parenteheses are required when a type is supplied as a sizeof's operand.