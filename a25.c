#include<stdio.h>
#include<stdlib.h>

#pragma pack(push,1)

typedef struct student{
	char name[50];
	float marks;
	int roll;
}std;

#pragma pop


int main(){
	
	int n,i;
	float highest;

	printf("Enter the number of students: ");
	scanf("%d",&n);
	
	std *s;
	s=(std *)malloc(n*sizeof(std));


	for(i=0;i<n;i++){
		printf("\nFor Student %d",i+1);

		printf("\nEnter roll: ");
		scanf("%d",&s[i].roll);

		fflush(stdin);

		printf("Enter name: ");
		gets(s[i].name);

		printf("Enter marks: ");
		scanf("%f",&s[i].marks);

		fflush(stdin);
	}
    

    printf("\nThe Students data are:");
	for(i=0;i<n;i++){
		printf("\nName=%s\t roll=%d\t marks=%f",s[i].name,s[i].roll,s[i].marks);
	}

	highest=(s+0)->marks;
	for(i=1;i<n;i++){
		if(highest<(s+i)->marks)
			highest=(s+i)->marks;
	}

	printf("\nHighest is = %f",highest);


	for(i=0;i<n;i++){
		if((s+i)->marks==highest)
			printf("\n%s, roll %d have the highest marks.",(s+i)->name,(s+i)->roll);
	}

	free(s);



	return 0;	
}
