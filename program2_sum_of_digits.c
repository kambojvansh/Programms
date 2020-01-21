/*Create a program to sum of given digits
Created by Vansh Kamboj
Date:- 21/01/2020*/

#include <stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter any Digit: ");
    scanf("%d",&num);
    while(num>0) {
        sum += num%10;
        num=num/10;
    }
    printf("\nSum is:- %d",sum);
    

    return 0;
}

