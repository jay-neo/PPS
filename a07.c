#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2;
    printf("Enter the coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter the coefficient of x: ");
    scanf("%d",&b);
    printf("Enter the constant value: ");
    scanf("%d",&c);
    d=(b*b-4*a*c);
    if (a!=0)
    { 
        
        if (d>0)
        {   r1=(-b+sqrt(d))/(2.0*a);
            r2=(-b-sqrt(d))/(2.0*a);
            printf("Roots are real, not equal and the roots are %f and %f.",r1,r2);
        }
        else if(d==0){
            r1=r2=(-b/(2.0*a));
            printf("Roots are real, equal and the root is %f.\n",r1);
        }
        else{
             printf("Roots are imaginary.");
        }
    }
    else{
        printf("It is not a quadratic equation.");
    }
    return 0;
}