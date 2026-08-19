
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
//Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.
//code:-

#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Calculation
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Output using %02d to force minimum 2-digit widths
    printf("Formatted time -> %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}



    








  
