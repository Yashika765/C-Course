// Reverse A Sentence Using Recursion

#include <stdio.h>
#include <string.h>
void reversestring(char *str)
{
    if (*str)
    {
        reversestring(str + 1);
        printf("%c", *str);
    }
}
int main(int argc, char const *argv[])
{
    char str[10];
    printf("Please Enter a string:\n");
    scanf("%s", &str);
    printf("The Reversed String Is:\n");
    reversestring(str);
    return 0;
}