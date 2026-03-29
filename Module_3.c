#include <stdio.h>
#include <string.h>
int main()
{

    //  Count the Vowel and Consonants in A Sentence

    char str[100];
    printf("Please Enter a String Without Gap Between: \n");
    gets(str);

    int vCount = 0, cCount = 0, len;
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char c = str[i];

        if (isalpha(c))
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                vCount++;
            }

            else
            {
                cCount++;
            }
        }
    }

    printf("Number of Vowel:%d", vCount);
    printf("\nNumber of Consonant:%d", cCount);




    // To Make A Calculator for Addition Subtraction Multiplication and Division of 2 numbers

    printf("Please Enter 1 for Addition Number 2 for Subtraction Number 3 for Multiplication 4 for Division:\n");
    int op;
    scanf("%d", &op);

    printf("\nPlease Enter First Number:\n");
    int number1;
    scanf("%d", &number1);

    printf("Please Enter second Number:\n");
    int number2;
    scanf("%d", &number2);

    int sum, diff, product, quotient;

    switch (op)
    {
    case 1:
        sum = number1 + number2;
        printf("The Sum of Two Number is:%d", sum);
        break;
    case 2:
        diff = number1 - number2;
        printf("The Diffrence of Two Number is:%d", diff);
        break;
    case 3:
        product = number1 * number2;
        printf("The product of Two Number is:%d", product);
        break;
    case 4:
        quotient = number1 / number2;
        printf("The quotient of Two Number is:%d", quotient);
        break;
    default:
        printf("Please Enter a valid oprator");
        break;
    }




    // To Print a table of a number

    printf("Please Enter a number:\n");
    int number = 0;
    int product = 0;
    scanf("%d", &number);

    for (int i = 1; i < 11; i++)
    {
        product = number * i;
        printf("%d", number);
        printf("*");
        printf("%d", i);
        printf("=");
        printf("%d", product);
        printf("\n");
    }




    // Right Triangle Star Pattern

    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }




    // Left Triangle Star Pattern

    int n = 5, i, j, k;
    for (int i = 1; i <= n; i++)
    {
        for (k = 2 * (n - i); k >= 0; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }




    // Pyramid Star Pattern

    int n = 5, i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }




    //  Diamond Star Pattern

    int rows, i, j, space;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    space = rows - 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    space = 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space++;
        for (j = 1; j <= 2 * (rows - i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }




    // Right Triangle Number Pattern (Desc)

    int j, i, n = 5;
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }




    // Right Triangle Repeat Number Pattern

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }




    // Pyramid Number Pattern (Asc)

    int n = 5;
    for (int i = 1; i <= n; i++)
        
        {
            for (int j = 5; j > i; j--)
            {
                printf(" ");
            }
            for (int k = 1; k <= i; k++)
            {
                printf("%d ", k);
            }
            printf("\n");
        }




    // Pyramid Number Pattern (Desc)

    int i, j, k, n = 5;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= n; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }



    
    // Pyramid Repeat Number Pattern

    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 5; j > i; j--) { printf(" "); }
        for (j = 1; j <= i; j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }

    return 0;
}