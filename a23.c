#include<stdio.h>


int fibo(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return (fibo(n-1)+fibo(n-2));
}


int main(){
    int n,i,res;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        res = fibo(i);
        printf("%d ",res);
    }


    return 0;
}
