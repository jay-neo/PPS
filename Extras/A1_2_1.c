#include<stdio.h>


int gcd(int x,int y){
    if (x%y==0) return y;
    return gcd(y, x%y);
}


int main(){
    int a,b;

    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);


    printf("Resultant G.C.D : %d",gcd(a,b));


    return 0;
}