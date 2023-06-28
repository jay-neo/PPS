#include<stdio.h>


struct Student{
    char name[30];
    int roll;
    float marks;
    long long num;
};


int main(){
    int roll,n,i;
    struct Student S[100];


    printf("Enter how many students' data you are willing to enter: ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("\nFor Student %d\n",i+1);
        printf("Enter roll number: ");
        scanf("%d",&S[i].roll);
        fflush(stdin);
        printf("Enter name: ");
        gets(S[i].name);
        printf("Enter marks: ");
        scanf("%f",&S[i].marks);
        fflush(stdin);
        printf("Enter contact number: ");
        scanf("%lld",&S[i].num);
    }

    printf("\nEnter searching roll number: ");
    scanf("%d",&roll);



    for (i=0;i<n;i++){
        if (roll==S[i].roll){
            printf("Name: %s\n",S[i].name);
            printf("Roll Number: %d\n",S[i].roll);
            printf("Marks: %f\n",S[i].marks);
            printf("Contact Number: %lld\n",S[i].num);
            return 0;
        }
    }


    printf("This roll number is not valid.");


    return 0;
}
