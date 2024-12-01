#include <stdio.h>
void main()
{
    int var1,var2,temp;
    printf("Enter First Variable :");
    scanf("%d",&var1);
    printf("Enter Second Variable :");
    scanf("%d",&var2);
    printf("The Variables Before Swap : %d and %d\n",var1,var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("The Variables After Swap : %d and %d\n",var1,var2);
}