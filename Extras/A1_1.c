#include <stdio.h>


int  main(){
  int n,i,sum1,sum2=0;
  int l,r;

  printf("Input the starting range of number : ");
  scanf("%d",&l);

  printf("Input the ending range of number : ");
  scanf("%d",&r);


  printf("The Perfect numbers within the given range : ");
  for(n=l;n<=r;n++){
    i=1;
    sum1 = 0;
      while(n>i){
        if(n%i==0)
          sum1=sum1+i;
        i++;
      }
    if(sum1==n){
      printf("%d ",n);
      sum2 += sum1;
    }
  }

   printf("\nThe Resultant sum is %d",sum2);

   return 0;
}