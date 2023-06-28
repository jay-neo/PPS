#include<stdio.h>

int main(){
    char str[100];
    int i,len=0,mid=0;

    printf("Enter your input: ");
    scanf("%[^\n]s",str);

    for ( i = 0; str[i]; i++)
        len++;

    mid=len/2;

    for ( i = 0; i < mid; i++){
        if (str[i] != str[len-1]){
            printf("It is not palindrome.");
            break;
        }
        len--;
    }


    if (i==mid)
        printf("It is palindrome.");
    
    return 0;
}
