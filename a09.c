#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0;
    for (i=1;i<=5;i++)
    {
        sum+=pow(i,i);
    }
    printf("Requried Sumation= %d",sum);
    return 0;
}
