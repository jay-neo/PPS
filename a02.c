#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Enter the value of integer: ");
    scanf(" %d",&a);
    printf("Enter the value of float: ");
    scanf(" %f",&b);
    printf("Enter the value of char: ");
    scanf(" %c",&c);
    printf("Enter the value of double: ");
    scanf(" %lf",&d);
    
    printf("The value of a=%d, address=%u, size=%u bytes\n",a,&a,sizeof(a));
    printf("The value of b=%f, address=%u, size=%u bytes\n",b,&b,sizeof(b));
    printf("The value of c=%c, address=%u, size=%u byte\n",c,&c,sizeof(c));
    printf("The value of d=%lf, address=%u, size=%u bytes\n",d,&d,sizeof(d));

    return 0;
}
