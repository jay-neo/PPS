#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i=2;i<=sqrt(n/2);i++)
    {
        if(n%i==0)
        {flag=1;
        break;}
    }
    if (flag==0)
    {
        printf("It is a Prime Number.");
    }
    else 
        printf("It is not a Prime Number.");
    return 0;
}
