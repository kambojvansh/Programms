/*Create a program to Square Root
Created by Vansh Kamboj
Date:- 21/01/2020*/

#include <stdio.h>

int main()
{
    float number,count=0,i,sum=0;
    printf("Enter Any Number to find Square Root: ");
    scanf("%f",&number);
    for(i=1;sum<=number;i+=2) {
        sum += i;
        count++;
    }
    printf("\nsquare root is :%f",count-1);
    return 0;
    
    
} 

//Second method 

#include<stdio.h>

void main()
{
    int number;

    float temp, result;

    printf("Provide the number: \n");
    scanf("%d", &number);

    result = number / 2;
    temp = 0; 

    while(result != temp){
        temp = result;
        result = ( number/temp + temp) / 2;
    }

    printf("The square root is '%f'", result);
}

