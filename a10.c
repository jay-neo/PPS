#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,rem,num,temp,k=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        num=num/10;
        k++;
    }
    num=temp;
    while (num>0)
    {
        rem=num%10;
        sum=sum+pow(rem,k);
        num=num/10;
    }
    if (temp==sum)
    {
        printf("It is a Armstrong number.");
    }
    else
    printf("It is not a Armstrong number.");

    return 0;
}
