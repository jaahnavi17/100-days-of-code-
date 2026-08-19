//Q1 Write a program to input two numbers and display their sum. 
//code:-
  
#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("enter two integers:");
    scanf("%d,%d",&a,&b);
    sum = a + b;
    printf("sum of %d and %d is %d\n",a,b,sum);
    return 0;
}


//Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.

//code :-

#include <stdio.h>

int main()
{
    int a,b,sum,diff,product,quotient;
    printf("enter two integers:");
    scanf("%d,%d",&a,&b);
    sum = a + b;
    diff= a - b;
    product = a * b;
    quotient = a / b;
    printf("sum of %d and %d is %d\n",a,b,sum);
    printf("difference of %d and %d is %d\n",a,b,diff);
    printf("product of %d and %d is %d\n",a,b,product);
    printf("quotient of %d and %d is %d\n",a,b,quotient);
    return 0;
}
