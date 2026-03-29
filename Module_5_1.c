// Find the Factorial of a Number Using Recursion

#include <stdio.h>
int factorial(int num)
{
    if (num >= 1)
    {
        int value = num * factorial(num - 1);
        return value;
    }
    else
    {
        return 1;
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Please Enter a number:\n");
    scanf("%d", &num);
    int val = factorial(num);
    printf("%d", val);
    return 0;
}