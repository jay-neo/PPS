#include<stdio.h>
void swap(int a,int b){
    int temp = a;
        a = b;
        b = temp;
    printf("After swaping two integers: %d %d",a,b);
}
int main()
{
    int x,y;
    printf("Enter your two integers: ");
    scanf("%d %d",&x,&y);
    printf("Before swaping two integers: %d %d\n",x,y);
    swap(x,y);
    return 0;
}
