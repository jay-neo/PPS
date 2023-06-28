#include<stdio.h>
int main()
{
   char o;
   int f,s;
   float r;
   printf("Press \n+ for addition\n- for subtraction\n/ for division\n* for multiplication\nEnter your choice ");
   scanf(" %c",&o);
   printf("Enter first operands: ");
   scanf("%d",&f);
   printf("Enter second operands: ");
   scanf("%d",&s);
   printf("Result ");
   switch (o)
   {
   case '+':
       printf("= %d",(f+s));
       break;
    case '-':
       printf("= %d",(f-s));
       break;
    case '*':
       printf("= %d",(f*s));
       break;
    case '/':
       if(s!=0)
      {
         r=(float)f/s;
         printf("= %f",r);
      }
       else
       printf("Division is not is possible.");
      break;
   default:
      printf("Invalid Choice");
       break;
   }
    return 0;
}
