#include<stdio.h>


int main(){
    int n1,n2,rem;

    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);

    while (n2!=0){
        rem=n1%n2;
        n1=n2;
        n2= rem;
    }

    printf("Resultant G.C.D = %d",n1);


    return 0;
}