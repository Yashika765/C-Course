#include <stdio.h> 
int main(){

    // Calculate the area of a square 
    
     int area, side;     
     printf("Please Enter a side: ");     
     scanf("%d", &side);     
     area = side * side;     
     printf("The Area is:%d", area);   
     
     
    //  Sum of all numbers 

    int num,temp,sum;
    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;
    sum=0;

    while (temp!=0)
    {
        sum = sum + (temp%10);
        temp=temp/10;
    }
    
    printf("Sum = %d",sum);


    // swap number without third variable

    int num1=13, num2=14;
    printf("Number 1 = %d\n",num1);
    printf("Number 2 = %d\n",num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("----Swapped----\n");
    printf("Number 1 = %d\n",num1);
    printf("Number 2 = %d\n",num2);


    // swap number with second variable 

    int a, b, c; 
    printf("Please Enter first number: ");         
    scanf("%d", &a);     
    printf("Please Enter second number: ");     
    scanf("%d", &b);     
    printf("Current Value Of variable 1 is: %d", a);     
    printf("\nCurrent Value Of variable 2 is: %d", b);     
    
    c = a;     
    a = b;     
    b = c; 
    
    printf("\nCurrent Value Of variable 1 is: %d", a);     
    printf("\nCurrent Value Of variable 2 is: %d", b); 
     
     return 0; 

}