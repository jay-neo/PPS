#include<stdio.h>


int main(){
    int r1,r2,c1,c2,i,j,k;
    int m1[20][20],m2[20][20],r[20][20];


    printf("Enter number of first matrix's rows and columns: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of the first matrix\n");
    for (i= 0; i < r1; i++)
       for (j = 0; j < c1; j++)
            scanf("%d", &m1[i][j]);
    


    printf("Enter number of second matrix's rows and columns: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of the second matrix\n");
    for (i= 0; i < r2; i++)
       for (j = 0; j < c2; j++)
            scanf("%d", &m2[i][j]);




    if(c1==r2){
        printf("Resultant Matrix:\n");
        for (i = 0; i< r1; i++) {
            for (j = 0; j < c2; j++){
                r[i][j] = 0;
                for (k = 0; k < c1; k++)
                    r[i][j] += m1[i][k]*m2[k][j];
                printf("%d\t", r[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Matrix Multiplicattion not possible.");


    return 0;
}


