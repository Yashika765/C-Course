// Convert Binary Numbers to Decimals

#include <stdio.h>
void binaytodecimal(int number)
{
    int binaryValue, decimalValue = 0, baseValue = 1, remiander;
    binaryValue = number;
    while (number > 0)
    {
        remiander = number % 10;
        decimalValue = decimalValue + remiander * baseValue;
        number = number / 10;
        baseValue = baseValue * 2;
    }
    printf("binary value:%d\n", binaryValue);
    printf("decimal value:%d", decimalValue);
}
int main(int argc, char const *argv[])
{
    printf("Please Enter a binary value:\n");
    int num = 0;
    scanf("%d", &num);
    binaytodecimal(num);
    return 0;
}