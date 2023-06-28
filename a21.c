#include<stdio.h>


int fact(int n){
    int i,f=1;
    for (i=1;i<=n;i++){
        f =f*i;
    }

    return f;
}

void main(){
    int x;
    float result = 0.0;

    for ( x = 1; x <= 5; x++)
        result += 1.0/fact(x);


    printf("The result is : %f",result);

    return 0;
}

/*
#include<stdio.h>               // Using Recursive Function 
int fact(int a){
    if(a==0) return 1;
    return fact(a-1)*a;
}
*/


/*

size_t fact(size_t n){
    size_t f=1;
    int i;
    for ( i = 1; i <= n; i++){
        f =f*i;
    }
    printf("\nFactorial of %d = %d",i-1,f);;
    return f;
}
void main()
{
    size_t x;
    float result = 0.0;
    for ( x = 1; x <= 35; x++)
        result = result + 1.0/fact(x);
    printf("\nThe result is : %f",result);
}

*/