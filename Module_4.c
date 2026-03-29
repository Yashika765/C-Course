#include <stdio.h>
int main()
{

    // Inverted Right Triangle Number Pattern (Asc)

    int i, j, n = 1;
    for (i = 5; i >= n; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }




    // Inverted Right Triangle Number Pattern (Desc)

    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }




    // Right Triangle Number Pattern (Asc)

    int n = 5, i, k = 1, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i + 1; j++)
        {
            printf(" %d", k++);
        }
        printf("\n");
    }




    //  Right Triangle Number Pattern (Desc)

    int i, n = 5, j;
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }




    // Diamond Number Pattern

    int n = 5; 
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }




    // Right Triangle Alphabetic Pattern

    int i, n = 5, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }




    // Right Triangle Repeat Alphabet Pattern

    int rows = 5;
    char alphabet = 'A';
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", alphabet);
        }
        alphabet++;
        printf("\n");
    }




    // Pyramid Alphabet Pattern (Asc)

    int i, j, k, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf(" %c", j + 64);
        }
        printf("\n");
    }




    //  Pyramid Alphabet Pattern (Desc)

    int rows = 5;
    int i, j, k;
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (k = i; k <= rows; k++)
        {
            printf("%c ", k + 64);
        }
        printf("\n");
    }




    // Pyramid Repeat Alphabet Pattern

    int rows = 5;
    int i, j, k;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%c ", i + 64);
        }
        printf("\n");
    }

    int i, j, n = 5;
    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }



    
    // Diamond Alphabet Pattern

    int row, column, space;
    int n = 5;
    for (row = 0; row < n; row++)
    {
        for (space = 1; space < n - row; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("%c ", column + 65);
        }
        printf("\n");
    }
    for (row = n - 2; row >= 0; row--)
    {
        for (space = 1; space < n - row; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("%c ", column + 65);
        }
        printf("\n");
    }

    return 0;
}