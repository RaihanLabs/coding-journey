#include <stdio.h>

int main(){
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

    return 0;
    // return is a statement that ends the execution of a function and optionally returns a value to the caller
    // 0 is a common return value for the main function, indicating that the program executed
}