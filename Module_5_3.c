// Display Armstrong Numbers Between Intervals

#include <stdio.h>
void armstrong(int low, int high)
{
    for (int i = low + 1; i < high; ++i)
    {
        int digits = 0;
        double result = 0;
        int originalNumber = i;
        while (originalNumber != 0)
        {
            originalNumber /= 10;
            ++digits;
        }
        originalNumber = i;
        while (originalNumber != 0)
        {
            int remainder = originalNumber % 10;
            result += pow(remainder, digits);
            originalNumber /= 10;
        }
        if (result == i)
        {
            printf("%d ", i);
        }
    }
    
}
int main(int argc, char const *argv[])
{
    printf("Please Enter a low number:\n");
    int low;
    scanf("%d", &low);
    printf("Please Enter a high number:\n");
    int high;
    scanf("%d", &high);
    armstrong(low, high);
    return 0;
}