#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time; //Declaration

    //input
    printf("Enter Principal :", &principal);
    scanf("%f", &principal);
    printf("Enter Rate :");
    scanf("%f", &rate);
    printf("Enter Time in years :");
    scanf("%f", &time);
    
    printf("Simple interest is :%d\n", (principal * rate * time) / 100);// Calculate and Display Simple Interest
    printf("Compound Interest is: %d", principal * pow((1 + rate / 100), time));// Calculate and Display coumpound Interest
}