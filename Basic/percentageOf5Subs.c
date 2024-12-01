#include <stdio.h>
int main()
{
    int arr[5],i,sum=0;
    for (i=0;i<5;i++)
    {
        printf("Enter Marks :");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("percentage is : %d\n",sum/5);
}