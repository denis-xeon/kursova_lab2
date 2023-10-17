#include "calculator.h"

int Calculator::Add (double a, double b)
{
    printf("Result of addition:");
    return a + b;
}

int Calculator::Sub (double a, double b)
{

    printf("Result of subtraction:");
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    printf("Result of multiplication:");
    return a * b;
}

float Calculator::Div (double a, double b)
{
    printf("Result of division:");
    return a / b;
}
