#include <stdio.h>


int main(){
   int row,col,i,j,k,m[20][20],t[20][20],r[20][20];

   printf("Enter the number of rows and columns: ");
   scanf("%d %d", &row, &col);

   printf("Enter elements of the matrix\n");
   for (i= 0; i < row; i++)
      for (j = 0; j < col; j++)
         scanf("%d", &m[i][j]);



   for (i = 0;i < row;i++)
      for (j = 0; j < col; j++)
         t[j][i] = m[i][j];

      
    printf("Input matrix:\n");
   for (i = 0; i< row; i++) {
      for (j = 0; j < col; j++)
         printf("%d\t", m[i][j]);
      printf("\n");
   }

   printf("Transpose of the matrix:\n");
   for (i = 0; i< col; i++) {
      for (j = 0; j < row; j++)
         printf("%d\t", t[i][j]);
      printf("\n");
   }



   for (i = 0; i< row; i++) {
      for (j = 0; j < row; j++){
            r[i][j] = 0;
            for (k = 0; k < col; k++)
                r[i][j] += m[i][k]*t[k][j];
        }
   }


   printf("Resultant Matrix:\n");
   for (i = 0; i< row; i++) {
      for (j = 0; j < row; j++)
         printf("%d\t", r[i][j]);
      printf("\n");
   }
   return 0;
}
