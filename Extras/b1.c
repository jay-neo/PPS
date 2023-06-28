#include<stdio.h>


void del_arr(int arr[], int n, int p){
    int i;
    
    if (p>=n+1){
        printf("Deletion not possible");
    }
    else{
        for(i = p-1; i < n-1; i++){
            arr[i]=arr[i+1];
		}
    }
    
}


int main(){
    int arr[50],n,i,p;

    printf("Enter the number of elements of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array:\n ");
    for(i=0;i<n;++i)
    	scanf("%d",&arr[i]);

    printf("Enter the position of array to delete: ");
    scanf("%d",&p);


    printf("Array before deletion:\n");
    for (i=0;i<n;i++)
        printf("%d ",arr[i]);


    del_arr(arr,n,p);

    printf("\nArray after deletion:\n");
    for (i=0;i<n-1;i++)
        printf("%d ",arr[i]);



    return 0;
}
