#include <stdio.h>

int main(){
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


    return 0;
}