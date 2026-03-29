// Display Prime Numbers Between Intervals

#include <stdio.h>
#include <stdbool.h>
void prime(int low, int high) 
{
    while (low < high)
    {
        bool flag = false;
        for (int i = 2; i <= low / 2; ++i)
        {
            if (low % i == 0)
            {
                flag = true;
                break;
            }
        }
        if (!flag && low != 0 && low != 1)
            printf("%d ", low);
        ++low;
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
    prime(low, high);
    return 0;
}