## Structure of a C program

- Every C program has a `main()`` function that has a return type of `int`` that is
either `return 0` or `return 1`.
- You can write custom functions outside the main function and call your custom
functions while passing them arguments in the main function.
- You can have a void function that does not have a return value.
For example `void functionName()`
- An expression has a return value. That means that  `x=4` has a return value of `4`





|Data Type  | Size (Typical)  | Range (Approximate)   |Purpose                             |
|-----------|-----------------| ----------------------|---------------------               |
char        |1 byte           |-128 to 127            |Single characters or small integers.|
int         |4 bytes          |-2 billion to 2 billion|Standard whole numbers.             |
float       |4 bytes          |6–7 decimal places     |Small decimals (Single precision).  |
double      |8 bytes          |15 decimal places      |Large/precise decimals (Double precision).|



## Working with strings in C
- Strings are array of characters in C that can should be terminated by a ``/0``
when it is read else C does not know how to read a string. So C relies on us to
keep track of our arrays.
- Single quotes are used for individual characters while double quotes are used
for strings with more than one character.
- A variable can be defined to include the character limit expected to be use by
the variable. So ``char employee_name [4]`` is expecting not more that 3 character
plus one for the ``\0`` terminating character that tells C the end of the
string.


## The compiler


# Control flow
- You can use `switch` statement in C
-

