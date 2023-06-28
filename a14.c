#include<stdio.h>


int main(){                                                           //Linear Searching(find key value from an integer array)
    int i,n,a[100],key;

    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the key: ");
    scanf("%d",&key);


    for (i=0;i<n;i++){
        if (a[i]==key){
            break;
        }
    }


    if (i<n){
        printf("The key value %d is found at position = %d",key,i+1);
    }else
        printf("The key value %d is not found.",key);
    

    return 0;
}
