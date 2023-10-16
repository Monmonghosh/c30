#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t, si,ci;
    printf("enter the principal:");
    scanf("%f", &p);
    printf("enetr the rate:");
    scanf("%f", &r);
    printf("enetr the time:");
    scanf("%f", &t);
    si=(p*r*t)/100;
    printf("simple intrest= %f\n", si);
    ci=p*(pow(1+r/100, t)-1);
    printf("compound interst: %f", ci);
}