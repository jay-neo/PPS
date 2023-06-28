#include<stdio.h>

void main(){
    char str[100];
    int c=0,i=0;

    printf("Enter your input: ");
    gets(str);

    while (str[i])
    {
        switch (str[i])
        {
        case 'a':
         case 'A':c++; break;
        case 'e':
         case 'E':c++; break;
        case 'i':
         case 'I':c++; break;
        case 'o':
         case 'O':c++; break;
        case 'u':
         case 'U':c++; break;
        
        }
        i++;
    }
    
    printf("In '%s' total Vowels: %d",str,c);
    
}
