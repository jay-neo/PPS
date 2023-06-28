#include<stdio.h>


int gcd1(int x,int y){
    if (x%y==0) return y;
    return gcd1(y, x%y);
}


int gcd2(int x,int y){
    if (y==0) return x;
    return gcd2(y, x%y);
}


int main()
{
    int a,b;

    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);

    printf("Resultant G.C.D : %d\n",gcd1(a,b));
    printf("Resultant G.C.D : %d",gcd2(a,b));

    return 0;
}
