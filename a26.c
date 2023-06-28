#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	FILE *fs, *ft;
	char details[200],ch;
	int i;

	fs=fopen("Profile.txt","w");

	printf("Enter your details : \n");
	while(strlen(gets(details))>0)
	{
		fputs(details,fs);
		fputs("\n",fs);
	}
	fclose(fs);
	


	fs=fopen("Profile.txt","r");
	if(fs==NULL)
	{
		printf("File does not exist");
		exit(0);
	}
	ft=fopen("myProfile.txt","w");
	


	while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
			break;
		else
			fputc(ch,ft);
	}

	fclose(fs);
	fclose(ft);



	return 0;
}

