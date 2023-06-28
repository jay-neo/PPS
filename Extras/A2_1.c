#include<stdio.h>


int fact(int n){
    int i,f=1;
    for ( i = 1; i <= n; i++){
        f =f*i;
    }
    return f;
}


int main()
{
    int x,n;
    float result = 0.0;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    for ( x = 1; x <= n; x++)
        result += (1.0*x)/fact(x);


    printf("The result is : %f",result);

    return 0;
}