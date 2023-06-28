#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,ci;
    printf("Enter the principal amount: ");
    scanf("%lf",&p);
    printf("enter the rate of interest: ");
    scanf("%lf",&r);
    printf("enter the time in year: ");
    scanf("%lf",&t);
    ci=p*pow((1+r/100),t);
    printf("Your Compound Interest is %lf",ci);

    return 0;
}
