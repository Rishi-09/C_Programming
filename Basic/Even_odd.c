#include <stdio.h>
void main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    if(num%2==0)
       printf("%d is Even number.\n",num);
    else
    printf("%d is Odd number.\n",num);
}