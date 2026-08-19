//Q11 Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() 
{
    int num;
    
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
    
    return 0;
}


//Q12 Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() 
   {
    int num;
    
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    
    if (num > 0) {
        printf("the number is positive integer.\n");
    } else if( num < 0){
        printf(" the number is a negative integer.\n");
    } else{
      printf(" the number is zero.\n");
    }
    
    return 0;
}





