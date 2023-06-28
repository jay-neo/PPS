#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Maximum=%d\n",(a>b&&a>c)?a:(b>c)?b:c);
    printf("Minimum=%d",(a<b&&a<c)?a:(b<c)?b:c);
    return 0;
}