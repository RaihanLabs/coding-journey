 // Getting Started with C Programming again
 /*
 This is a new practice project to refresh my C programming skills.
 I will be working on various exercises and projects to improve my understanding of the language and its features.
 */

 // C is a general-purpose programming language that is widely used for system programming, embedded systems, and application development.
 // It is known for its efficiency and low-level access to memory.


 #include <stdio.h>
    // #include is a preprocessor directive that tells the compiler to include the contents of a specified file in the program.
    // <stdio.h> is a standard library header file that contains declarations for input/output functions, such as printf and scanf.
    // <> is used to include standard library headers, while "" is used to include user-defined headers.
 
 #include <stdbool.h>
    // <stdbool.h> is a standard library header file that contains definitions for the boolean data type and its values (true and false).

#include <string.h>
    // <string.h> is a standard library header file that contains declarations for string handling functions, such as strlen, strcspn, etc.


    int main(){
    // int is the return type of the main function, which indicates that it will return an integer value to the operating system upon completion.
    // main is the entry point of a C program, where the execution starts. It is a special function that must be defined in every C program.
    // () is used to define the parameters of a function. In this case, main does not take any parameters, so it is empty.
    // { } is used to define the body of a function, which contains the statements that will be executed when the function is called.
 

    printf("Hello World!");
    // printf is a function that prints text to the console   
    // () is used to call a function and pass arguments to it
    // "" is used to denote a string literal in C
    // "something" is a string literal, which is a sequence of characters enclosed in double quotes
    // ; is used to end a statement in C

    printf("Let's get started!\n");
    // \n is a newline charecter that moves the cursor/text to the next line

    printf("Yeah it's working\n\n");
    // this is a comment, which is ignored by the compiler and is used to provide explanations or notes in the code   
    // \n\n two or multiple line break




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
    printf("I was born in %d\n\n", year);



    float cgpa = 3.67;
    float temperature = 31.657;
    // float is a data type that represents a floating-point number, which is a number that can have a fractional part
    
    printf("My CGPA is %f\n", cgpa);
    // %f is a format specifier that is used to indicate that a floating-point
    printf("My CGPA is %.2f\n\n", cgpa);
    // .2 indicates that the floating-point number should be printed with 2 decimal places

    printf("The temperature is %.1f degrees Celsius\n\n", temperature);



    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    // double is a data type that represents a double-precision floating-point number, which is a number that can have a fractional part and is more precise than a float
    
    printf("The value of pi is %.13lf\n",pi);
    // %lf is a format specifier that is used to indicate that a double-precision floating-point number will be printed in the output
    printf("The value of e is %.11lf\n\n",e);



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


    char name[15] = "Raihan"; // 15 is the size of the array, which can hold up to 14 characters plus the null character
    // [] is used to define an array in C. In this case, name is an array of characters that can hold a string.
    /* "Raihan Ahammed" is a string literal, which is a fixed value that is directly written in the code and represents a sequence of characters.
    It is stored in the name array, which can hold up to 15 characters (including the null character).*/
    // name[] is an array of characters that can hold a string. The size of the array is determined by the length of the string literal plus one for the null character.

    printf("My name is %s\n", name);
    // %s is a format specifier that is used to indicate that a string value will be printed in the output
    // name is the variable that holds the string value, which will be printed in the output

    char email[] = "raihan@email.com";

    printf("My email is %s\n\n", email);



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
        printf("No, I am not a student.\n\n");
    }


    // Format Specifiers and Modifiers
    /*
      Format Specifiers: format specifiers are special tokens that begin with a % symbol followed by a character,
      that specifies the data type and optional modifiers(eg. width, precision, flags, etc.).
      They control how data is formatted and displayed or interpreted in the output.
      Some common format specifiers include:
      %d for integers
      %f for floating-point numbers
      %lf for double-precision floating-point numbers.
      %c for characters
      %s for strings
    */

    int quantity = 1;
    float price_rise = 2.668;
    double price = 20.24545993245;
    char currency = '$';
    char product[] = "Alu";

    printf("The price of %dkg %s is %.8lf%c and it has risen by %.2f%c\n\n\n",quantity, product, price, currency, price_rise, currency);

    int num1 = 2;
    int num2 = -30;
    float num3 = 400.36798;
    double num4 = -5000.643218364635343;

    // width : minimum number of character to be printed.
    printf("Num1: %5d\n", num1); // 5d means 5 spaces before the number(right align)
    printf("Num2: %5d\n", num2);
    printf("Num3: %5f\n", num3);
    printf("Num4: %5lf\n\n", num4);

    printf("Num1: %-5d\n", num1); // -5d means 5 spaces after the number(left align)
    printf("Num2: %-5d\n", num2);
    printf("Num3: %-5f\n", num3);
    printf("Num4: %-5lf\n\n", num4);
    
    // flags : +  show the sign before the number
    printf("Num1: %-+5d\n", num1); // +5d show the sign before the number
    printf("Num2: %-+5d\n", num2); // -+5d : left align and show sign
    printf("Num3: %-+5f\n", num3);
    printf("Num4: %-+5lf\n\n", num4);

    printf("Num1: %+05d\n", num1); // 0d   : preced with zeros instead of spaces
    printf("Num2: %+05d\n", num2); // +05d : 5 spaces, show sing, preced zeros
    printf("Num3: %+05f\n", num3);
    printf("Num4: %+05lf\n\n", num4);

    // Precision : .2f means 2 decimal places for floating-point numbers
    printf("Num1: %-+05d\n", num1);
    printf("Num2: %-+05d\n", num2);
    printf("Num3: %-+05.3f\n", num3);  // -+05.3f : left align, show sign, preced zero, 5 space, 3 decimal points
    printf("Num4: %-+05.12lf\n\n", num4);



    // Arithmetic Operators: =, +, -, *, /, %, ++, --

    // = is the assignment operator, which assigns the value on the right to the variable on the left
    // + is the addition operator, which adds two operands
    // - is the subtraction operator, which subtracts the right operand from the left operand
    // * is the multiplication operator, which multiplies two operands
    // / is the division operator, which divides the left operand by the right operand
    // % is the modulus operator, which returns the remainder of the division of the left operand by the right operand
    // ++ is the increment operator, which increases the value of a variable by 1
    // -- is the decrement operator, which decreases the value of a variable by 1

    int a1 = 2;
    int a2 = 3;
    int s1 = 1;
    int s2 = 4;
    int m1 = 2;
    int m2 = 3;
    float d1 = 10;
    float d2 = 3;
    float z = 0;

    z = a1 + a2; // addition
    printf("Addition: %f\n", z);

    z= s1 - s2; // subtraction
    printf("Subtraction: %f\n", z);

    z = m1 * m2; // multiplication
    printf("Multiplication: %f\n", z);

    z = d1 / d2; // division
    printf("Division: %f\n", z);

    z = a1 % a2; // modulus(remainder of division)
    printf("Modulus: %f\n", z); // modulus operator is only applicable for integer operands

    a1++; // increment
    printf("Increment: %d\n", a1);

    s1--; // decrement
    printf("Decrement: %d\n", s1);

    a2 = a2 + 3; // addition assignment operator or a2 += 3;
    printf("Addition Assignment: %d\n", a2);

    a1 -= 2; // subtraction assignment operator or a1 = a1 - 2;
    printf("Subtraction Assignment: %d\n", a1);

    m2 *= 4; // multiplication assignment operator or m2 = m2 * 4;
    printf("Multiplication Assignment: %d\n", m2);

    d1 = d1 / 2; // division assignment operator or d1 /= 2;
    printf("Division Assignment: %f\n", d1);

    
    // User Input

    int age1 = 0;             // set default value to 0 to avoid garbage value
    float cgpa1 = 0.0;         // 0.0 or 0.0f can be used for float initialization
    char grade1 = '\0';       // '\0' is the null character, used to indicate an empty char
    char name1[10] = {'\0'};   // {'\0'} or "" initializes the first element to null character, and the rest will be automatically initialized to '\0'
    char full_name[20] = "";
    // set default values to avoid garbage values

    printf("Enter your age: ");

    // user input is taken using scanf("%",&); function. The format specifier % is used to read value, and
    // & is used to pass the address of the variable to store the input value.
    scanf(" %d", &age1); // scanf is used to take input from the user. It reads a value from the user and stores it in the variable.

    printf("Enter your CGPA: ");
    scanf(" %f", &cgpa1); // %.2f is used to read a float value with 2 decimal places
    
    // input buffer issue: when we read a number (like age or cgpa) using scanf, it leaves a newline character in the input buffer.
    // So when we read a character (like grade) using scanf("%c"), it reads that leftover newline character instead of waiting for user input.
    // To fix this, we can add a space before %c in scanf to skip any whitespace characters (including the newline).
    printf("Enter your grade: ");
    scanf(" %c", &grade1);
    
    printf("Enter your name: ");
    scanf(" %6s", name1); // %5s is used to read a string with a maximum width of 5 characters. This prevents buffer overflow by ensuring that no more than 4 characters are read (plus the null terminator).
    // only single word input is allowed for name, if user enters multiple words, only the first word will be stored in the name variable.

    getchar(); // to consume the leftover newline character from the previous input
    // getchar(); used to eliminate input buffer issue

    printf("Enter your full name: ");
    fgets(full_name, sizeof(full_name), stdin);
    // solution to read multiple words with spaces: we can use fgets() function instead of scanf() to read a string with spaces. fgets() reads a line of text and stores it in a string variable, including spaces.
    // sizeof(full_name) is used to specify the maximum number of characters to read, including the null terminator. This prevents buffer overflow.
    // sizeof(variable) or [20](should be the same size as the array) can be used
    
    full_name[strlen(full_name) - 1] = '\0';
    // to remove the newline character added by fgets() at the end of the string.
    // full_name[strlen(full_name) - 1] = '\0'; gives the index of the last character, and we replace it with a null terminator.
    // full_name[strcspn(full_name, "\n")] = '\0'; is another way to remove the newline character, but it seems to be not working in this case. It should work in general, so there might be some issue with how it's being used.
    printf("\n");   // line gap

    printf("So you are %d years old.\n", age1);
    printf("Your CGPA is: %.2f\n", cgpa1);
    printf("Your grade is: %c\n", grade1);
    printf("Your full name is: %s\n", full_name);
    
    // new line is included in full_name because fgets() reads the newline character when the user presses Enter. 
    // To remove the newline character, we can replace it with a null terminator.
    // full_name[strcspn(full_name, "\n")] = '\0'; its not working for some reason.

    printf("Your name is: %s\n", name1);





    char name2[20] = "";
    char father_name[20] = {'\0'};
    char mother_name[20] = {'\0'};
    int age2 = 0;
    char contact_number[20] = "";
    char email1[50] = "";
    bool is_current_student;
    char present_address[100] = "";
    char permanent_address[100] = "";
    char school[50] = "";
    char college[50] = "";
    int temp = 0; // temporary variable to store boolean input for current student status
    is_current_student = false; // default value for current student status
    


    printf("Enter your Name: ");
    fgets(name2, sizeof(name2), stdin);
    // fgets is used to read a string with spaces. It reads a line of text from the user and stores it in a string variable, including spaces.
    name[strcspn(name, "\n")] = '\0'; // to remove the newline character added by fgets() at the end of the string. strcspn() returns the index of the first occurrence of the newline character, and we replace it with a null terminator.

    printf("Enter your Father's Name: ");
    fgets(father_name, sizeof(father_name), stdin);
    father_name[strcspn(father_name, "\n")] = '\0';

    printf("Enter your Mother's Name: ");
    fgets(mother_name, sizeof(mother_name), stdin);
    mother_name[strlen(mother_name) - 1] = '\0';

    printf("Enter your Age: ");
    scanf("%d", &age2);

    printf("Enter your Contact Number: ");
    scanf("%19s", contact_number);
    

    printf("Enter your E-mail address: ");
    scanf("%49s", email1);
    printf("\n");

    printf("Are you a current student of this University? (1 for yes, 0 for no): ");
    scanf("%d", &temp);
    is_current_student = (temp == 1) ? true : false;  // set current student status based on user input
    printf("\n");

    getchar(); // to consume the leftover newline character from the previous input
    printf("Enter your Present Address: ");
    fgets(present_address, sizeof(present_address), stdin);
    present_address[strcspn(present_address, "\n")] = '\0';
    
    printf("Enter your Permanent Address: ");
    fgets(permanent_address, sizeof(permanent_address), stdin);
    permanent_address[strlen(permanent_address) - 1] = '\0';

    printf("Enter your School Name: ");
    fgets(school, sizeof(school), stdin);
    school[strcspn(school, "\n")] = '\0';

    printf("Enter your College Name: ");
    fgets(college, sizeof(college), stdin);
    college[strcspn(college, "\n")] = '\0';

    printf("\n\n\n\n");
    printf("===============================================\n");
    printf("            Student Information Form           \n");
    printf("===============================================\n");

    printf("%-17s : %s\n", "Name", name);

    printf("%-17s : %s\n", "Father's Name", father_name);

    printf("%-17s : %s\n", "Mother's Name", mother_name);

    printf("%-17s : %d\n", "Age", age2);

    if(is_current_student == true){
        printf("%-17s : Yes\n", "Current Student");
    } else {
        printf("%-17s : No\n", "Current Student");
    }

    printf("%-17s : %s\n", "Contact Number", contact_number);

    printf("%-17s : %s\n", "E-mail address", email1);

    printf("%-17s : %s\n", "Present Address", present_address);

    printf("%-17s : %s\n", "Permanent Address", permanent_address);

    printf("%-17s : %s\n", "School Name", school);

    printf("%-17s : %s\n", "College Name", college);

    printf("===============================================");




    

    return 0;
    // return is a statement that ends the execution of a function and optionally returns a value to the caller
    // 0 is a common return value for the main function, indicating that the program executed
}