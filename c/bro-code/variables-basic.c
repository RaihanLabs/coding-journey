#include <stdio.h>
    // #include is a preprocessor directive that tells the compiler to include the contents of a specified file in the program.
    // <stdio.h> is a standard library header file that contains declarations for input/output functions, such as printf and scanf.
    // <> is used to include standard library headers, while "" is used to include user-defined headers.
 
 #include <stdbool.h>
    // <stdbool.h> is a standard library header file that contains definitions for the boolean data type and its values (true and false).


int main(){
    // int is the return type of the main function, which indicates that it will return an integer value to the operating system upon completion.
    // main is the entry point of a C program, where the execution starts. It is a special function that must be defined in every C program.
    // () is used to define the parameters of a function. In this case, main does not take any parameters, so it is empty.
    // { } is used to define the body of a function, which contains the statements that will be executed when the function is called.


    // variables and data types
    // variable = a reusable container for storing a value. Behaves as if it were the value it contains. Can be used to store data that can be changed during program execution.
    // data type = the type of value a variable can hold (e.g. integer, float, double, char, char[](string), bool, etc.)
    
    // int = whole numbers (e.g. -1, 0, 1, 2, etc.) (4 bytes in most systems)
    // float = decimal numbers (e.g. 3.14, -0.5, etc.) (4 bytes in most systems)
    // double = more precise decimal numbers (e.g. 3.14159265358979323846) (8 bytes in most systems)
    // char = single characters (e.g. 'A', 'B', '@', etc.) (1 byte in most systems)
    // char[] = strings or array of characters (e.g. "Hello", "World", etc.) (size depends on the length of the string) (arrays of characters)
    // bool = boolean values (true or false) (1 byte in most systems)


    int age = 20;
    int year = 2004;
    // int is a data type that represents an integer value
    // age is the name of the variable, which is used to refer to the value stored in it
    // = is the assignment operator, which assigns the value on the right to the variable on the left
    // 20 is an integer literal, which is a fixed value that is directly written in

    printf("I am %d years old\n", age);
    // %d is a format specifier that is used to indicate that an integer value will be printed in the output
    // , is used to separate multiple arguments in a function call
    printf("I was born in %d\n", year);



    float cgpa = 3.67;
    float temperature = 31.657;
    // float is a data type that represents a floating-point number, which is a number that can have a fractional part
    
    printf("My CGPA is %f\n", cgpa);
    // %f is a format specifier that is used to indicate that a floating-point
    printf("My CGPA is %.2f\n", cgpa);
    // .2 indicates that the floating-point number should be printed with 2 decimal places
    printf("The temperature is %.1f degrees Celsius\n", temperature);



    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    // double is a data type that represents a double-precision floating-point number, which is a number that can have a fractional part and is more precise than a float
    
    printf("The value of pi is %.13lf\n",pi);
    // %lf is a format specifier that is used to indicate that a double-precision floating-point number will be printed in the output
    printf("The value of e is %.11lf\n",e);



    char grade = 'A';
    char symbol = '@';
    // char is a data type that represents a single character, which is a letter, digit, or symbol enclosed in single quotes
    // '' is used to denote a character literal in C
    // 'A-' or 'B+' is not a valid character literal because it contains more than one character. It should be 'A' or '@' instead.
    // 'A' or '@' is a character literal, which is a fixed value that is directly written in the code and represents a single character

    printf("My grade is %c\n", grade);
    // %c is a format specifier that is used to indicate that a character value will be printed in the output
    printf("My favourite symbol is %c\n", symbol);



    // Strings is a sequence of characters that is used to represent text. In C, strings are represented as arrays of characters, terminated by a null character '\0'.
    /* Strings in C are represented as arrays of characters, terminated by a null character '\0'. 
    They are not a built-in data type like in other programming languages, but can be created using character arrays.*/

    char name[] = "Raihan";
    // [] is used to define an array in C. In this case, name is an array of characters that can hold a string.
    /* "Raihan Ahammed" is a string literal, which is a fixed value that is directly written in the code and represents a sequence of characters.
    It is stored in the name array, which can hold up to 15 characters (including the null character).*/
    // name[] is an array of characters that can hold a string. The size of the array is determined by the length of the string literal plus one for the null character.

    printf("My name is %s\n", name);
    // %s is a format specifier that is used to indicate that a string value will be printed in the output
    // name is the variable that holds the string value, which will be printed in the output

    char email[50] = "raihan@email.com"; // 50 is the size of the array, which can hold a string of up to 49 characters (plus the null character)
    printf("My email is %s\n", email);



    bool isStudent = true;
    // bool is a data type that represents a boolean value, which can be either true or false
    // true and false are boolean literals, which are fixed values that represent the two possible states of a boolean variable
    // true, false indicates to 1 and 0 respectively in C
    bool isGraduate = 0;
    // 'is Graduate' is wrong because it follows the camelcase naming containing a space

    printf("Am I a student? %d\n", isStudent);
    printf("Am I a graduate? %d\n", isGraduate);
    // %d is used to print the integer value of a boolean variable, where true is represented as 1 and false is represented as 0 in C
    if(isStudent){
        printf("Yes, I am a student.\n");
    } 
    else {
        printf("No, I am not a student.\n");
    }

    return 0;
    // return is a statement that ends the execution of a function and optionally returns a value to the caller
    // 0 is a common return value for the main function, indicating that the program executed
}