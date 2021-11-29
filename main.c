/*
  PROJECT: SIMPLE CALCULATOR
  AUTHOR: NOAH KIRRINKOL WUALA
  DATE: OCTOBER 2021
  COMPILER: GCC
  LANGUAGE: C99
  LICENSE: MIT

  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable Declaration
    int num1, num2, sum, diff, product, mod;
    float quot;

    //Assignment Statements
    num1 = 500;
    num2 = 40;

    //Computations
    sum = num1 + num2;
    diff = num1- num2;
    product = num1 * num2;
    quot = (float) num1 / num2;
    mod = num1 % num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, diff);
    printf("%d * %d = %d\n", num1, num2, product);
    printf("%d / %d = %.1f\n", num1, num2, quot);
    printf("%d mod %d = %d\n", num1, num2, mod);
    return 0;
}
