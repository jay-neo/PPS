#include<stdio.h>
void main()
{
	int i,j,k,n;
	char c='a';
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=(2*i-1);k++)
		{
			printf("%c",c);
            c++;
			if(c>'z'){
				c='a';
            }
		}
		printf("\n");
	}
}