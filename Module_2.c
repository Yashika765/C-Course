#include <stdio.h> 

int main(){ 

    // chaeck character is alphabet or not 
    char ch; 
    printf("Please Enter a Character: "); 
    scanf("%ch", &ch); 
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){ 
        printf("Character Is Alphabet"); 
    } 
    else{ 
        printf("Character Is Not Alphabet"); 
    }


    // Check if a Number Is Even or Odd

    int num; 
    printf("Please Enter a Number: "); 
    scanf("%d", &num); 
    if (num % 2 == 0) { 
        printf("The Number Is Even"); 
    } 
    else { 
        printf("The Number Is Odd"); 
    } 


    // Check Number Is Positive or Negative

    int num;     
    printf("Please Enter a number: ");     
    scanf("%d", &num);     
    if (num > 0){         
        printf("The Number Is Positive");     
    }     
    else{         
        printf("The Number Is Negative");     
    }
    
    
    // Check Whether an Alphabet Is Vowel or Consonant

    char ch; 
    printf("Please Enter a Character: "); 
    scanf("%ch", &ch); 
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') { 
        printf("The Character is Vowel"); 
    } 
    else { 
        printf("The Charcter is Consonant"); 
    }


    // Find the Largest Number among the Four Numbers

    int number1, number2, number3;         
    printf("Please Enter First number: ");     
    scanf("%d", &number1);     
    printf("Please Enter Second number: ");     
    scanf("%d", &number2);     
    printf("Please Enter Third number: "); 
     scanf("%d", &number3);     
     {         
        if (number1 > number2){              
            if (number1 > number3){                 
                printf("Number One Is The Largest");             
            }             
            else{                 
                printf("Number Three Is The Largest");             
            }
        }  
        else if (number2 > number3){             
            printf("Number Two Is The Largest");         
        }         
        else{             
            printf("Number Three Is The Largest");         
        }     
                
    } 



    // Check Whether a Year Is Leap Year or Not

    int year;     
    printf("Plesae Enter a Year: ");     
    scanf("%d", &year);     
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){         
        printf("This Year Is a leap year");     
    }     
    else{         
        printf("This Year Is Not a leap year");     
    } 



    //  Display the Fibonacci Series

     int number;     
     printf("Enter a Number: ");     
     scanf("%d", &number);     
     int firstTerm = 0, secondTerm = 1;     
     printf("Fabonnic Series Till These Terms Are: ");     
     for (int i = 1; i <= number; ++i){         
        printf("\n%d", firstTerm, ",");         
        int nextTerm = firstTerm + secondTerm;         
        firstTerm = secondTerm;         
        secondTerm = nextTerm;     
    }
    
    

    // Find HCF and GCD 
    
    int num1, num2, hcf = 0, max; 
    printf("Please Enter First Number: ");         
    scanf("%d", &num1);     
    printf("Please Enter Second Number: ");     
    scanf("%d", &num2);
     for (max = 1; max <= num1 || max <= num2; max++){         
        if (num1 % max == 0 && num2 % max == 0){             
            hcf = max;         
        }     
    }     
    printf("HCF Of Given Number Is: %d", hcf);  


    // Find the Factorial of a Number

    int number = 0;         
    printf("Please Enter a number: ");     
    scanf("%d", &number);     
    long factorial = 1; 
     for (int i = 1; i <= number; ++i){         
        factorial *= i;     
    }     
    printf("Factorial Is: %d", factorial); 


    // Find the Lowest Common Multiple Factor (LCM)

    int x, y, lcm; 
    scanf("%d", &x); 
    scanf("%d", &y); 
    if (x > y) 
    lcm = x;     
    else         
    lcm = y;     
    
    while (1){         
        if (lcm % x == 0 && lcm % y == 0){             
            printf("Lcm is: %d", lcm);             
            break;         
        }         
        lcm++;     
    } 



    // Check whether a Number is Palindrome or Not

     printf("Please Enter a number:\n");     
     int Number = 0;     
     scanf("%d", &Number);     
     int r, sum = 0, temp;     
     temp = Number;     
     while (Number > 0){         
        r = Number % 10;         
        sum = (sum * 10) + r;         
        Number = Number / 10;     
    } 
    if (temp == sum){         
        printf("Palindrome");     
    }     
    else{         
        printf("Not a Palindrome");     
    }
    
    

    // Check whether a Number Is Armstrong Or Not

     printf("Please Enter a number:\n");     
     int number = 0, originalNumber, remainder, store = 3;     
     scanf("%d", &number);     
     double result = 0;     
     originalNumber = number;     
     while (originalNumber != 0) {         
        remainder = originalNumber % 10;         
        result = result + pow(remainder, store);          
        originalNumber /= 10;     
    }

    if (result == number)         
    printf("Number Is A Armstrong Number");     
    else         
    printf("Number Is Not A Armstrong Number"); 



    // Check whether a Number Is Prime or Not

     int n, i, flag = 0;        
     printf("Enter a positive integer: ");    
     scanf("%d", &n);        
     for(i = 2; i <= n/2; ++i) {                    
        if(n % i == 0) {          
            flag = 1;          
            break;       
        }    
    }        
    if (n == 1) {       
        printf("1 is neither prime nor composite.");    
    }    
    else {       
        if (flag == 0)          
        printf("%d is a prime number.", n);       
        else          
        printf("%d is not a prime number.", n);    
    }        



    
    
    return 0;

}