#include <stdio.h> 

int main() { 
	int i,j,row,col,min,max;
    int matrix[100][100]; 


    printf("Enter the row and colomn number: ");
    scanf("%d %d",&row,&col);

	printf("Enter the elements one-by-one:\n"); 
	for(i = 0; i< row; i++) 
		for( j = 0; j < col; j++)
			scanf("%d", &matrix[i][j]); 
			

	for(i = 0; i < row; i++)
		for(j = 0; j < col; j++)
			min = matrix[0][0];
	

	for(i = 0; i < row; i++){ 
		for(j = 0; j < col; j++) {
			if(matrix[i][j] < min) 
				min = matrix[i][j];
		} 
	} 

    printf("Minimum value: %d\n",min);
    for(i = 0; i < row; i++)
		for(j = 0; j < col; j++)
			max = matrix[0][0];
	

	for(i = 0; i < row; i++){ 
		for(j = 0; j < col; j++) {
			if(matrix[i][j] > max) 
				max = matrix[i][j];
		} 
	} 

	
	printf("Maximum Value: %d",max); 
 
	return 0; 
}
