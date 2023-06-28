#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i=0;

    printf("Enter your name: ");
    scanf("%[^\n]",str);

    strupr(str);
    printf("%c. ",str[i]);
    
    while (str[i] != '\0'){
        if(str[i]==' '){
            printf("%c. ",str[i+1]);
        }
        i++;
    }
    
    return 0;
}

/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a,b,i,str[100];
    printf("Enter your input: ");
    gets(str); 
    int len = strlen(str);
    if (len== 0){
        printf("NO Input");
	}
    a = toupper(str[0]);
    printf("%c.",a);
    for (i = 0; i < len; i++){
        b = toupper(str[i+1]);
        if (str[i] == ' ')
            printf(" %c.",b);
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a,b,i,str[100];
    printf("Enter your input: ");
    gets(str); 
    int len = strlen(str);
    for(i=0;i<len;i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == ' ')){
        continue;
        }
        else
        goto end1;
    }
    a = toupper(str[0]);
    printf("%c.",a);
    for (i = 0; i < len; i++){
        b = toupper(str[i+1]);
        if (str[i] == ' ')
            printf(" %c.",b);
    }
    goto end2;
    if(len==0){
        printf("NO Input");
	}
    else
    end1:
        printf("Invalid Input");
    end2:
    return 0;
}
*/