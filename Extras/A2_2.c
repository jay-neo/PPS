#include<stdio.h>


int main(){
    int i,j,k,temp,n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);


    for (i=1;i<=n;i++){

        for (j=1;j<=i;j++)
            printf("*");

        for(j=2*(n-i);j>=1;j--)
            printf(" ");

        for (j=1;j<=i;j++)
            printf("*");

        printf("\n");
    }
    

    return 0;
}


