#include <stdio.h>

#include <string.h>
// for strcspn() function to remove newline character from full_name
// for strlen() function to get the length of the string

int main(){

    printf("Hello world\n\n");
    
    // User Input

    int age = 0;             // set default value to 0 to avoid garbage value
    float cgpa = 0.0;         // 0.0 or 0.0f can be used for float initialization
    char grade = '\0';       // '\0' is the null character, used to indicate an empty char
    char name[10] = {'\0'};   // {'\0'} or "" initializes the first element to null character, and the rest will be automatically initialized to '\0'
    char full_name[20] = "";
    // set default values to avoid garbage values

    printf("Enter your age: ");

    // user input is taken using scanf("%",&); function. The format specifier % is used to read value, and
    // & is used to pass the address of the variable to store the input value.
    scanf(" %d", &age); // scanf is used to take input from the user. It reads a value from the user and stores it in the variable.

    printf("Enter your CGPA: ");
    scanf(" %f", &cgpa); // %.2f is used to read a float value with 2 decimal places
    
    // input buffer issue: when we read a number (like age or cgpa) using scanf, it leaves a newline character in the input buffer.
    // So when we read a character (like grade) using scanf("%c"), it reads that leftover newline character instead of waiting for user input.
    // To fix this, we can add a space before %c in scanf to skip any whitespace characters (including the newline).
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    
    printf("Enter your name: ");
    scanf(" %6s", name); // %5s is used to read a string with a maximum width of 5 characters. This prevents buffer overflow by ensuring that no more than 4 characters are read (plus the null terminator).
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

    printf("So you are %d years old.\n", age);
    printf("Your CGPA is: %.2f\n", cgpa);
    printf("Your grade is: %c\n", grade);
    printf("Your full name is: %s\n", full_name);
    
    // new line is included in full_name because fgets() reads the newline character when the user presses Enter. 
    // To remove the newline character, we can replace it with a null terminator.
    // full_name[strcspn(full_name, "\n")] = '\0'; its not working for some reason.

    printf("Your name is: %s\n", name);

    return 0;
}