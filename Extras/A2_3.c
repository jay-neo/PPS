#include<stdio.h>


void sortarray(int *ptr, int n){
    int i, j, t;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}



int main(){
    int n,i,arr[50];

    printf("Enter the value of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);



    sortarray(&arr[0],n);

    for (i=0;i<n;i++)
        printf("%d ",arr[i]);
    


    return 0;
}
