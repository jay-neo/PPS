#include<stdio.h>


int ackermann(int m, int n){
    if (m==0)
        return n+1;
    else if ((m>0)&&(n==0))
        return ackermann(m-1,1);
    else if ((m>0)&&(n>0))
        return ackermann(m-1,ackermann(m,n-1));
}


int main(){
    int m,n,result;

    printf("Enter two integer: ")    ;
    scanf("%d %d",&m,&n);

    result = ackermann(m,n);
    printf("The value of Ackermann(%d,%d) is %d",m,n,result);


    return 0;
}
