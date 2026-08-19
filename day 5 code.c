
//Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.

  //code:-

    #include <stdio.h>
#include<math.h>
int main()
{
    float p,r,t,amt, ci,d;

    printf("enter principle , rate and time = ");
    scanf("%f,%f,%f", &p,&r,&t);
    d = (p*r*t)/100;
    amt= p*pow((1+r/100),t);
    ci= amt-p;
    
    printf("simple intrest =%.2f\n",d);
    printf("compound interest = %.2f\n",ci);

    return 0;
}



    








  
