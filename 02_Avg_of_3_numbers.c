#include <stdio.h>
int main()
{
    float a, b, c, avg;
    
    printf("Enter 1st number:"); //Inputs 1st number
    scanf("%f", &a);

    printf("Enter 2nd number:"); //Inputs 2nd number
    scanf("%f", &b);

    printf("Enter 3rd number:"); //Inputs 3rd number
    scanf("%f", &c);

    avg = (a+b+c)/3;
    
    printf("The average of numbers entered is %.2f", avg);
    return 0;
}