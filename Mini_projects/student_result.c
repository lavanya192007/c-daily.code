#include<stdio.h>
int main()
{
    int t,e,m,ss,s;
    float  to,a;
    printf(" Enter marks for Tamil,English,Maths,Science,Social science : ");
    scanf("%d %d %d %d %d",&t,&e,&m,&s,&ss);
    to= t+e+m+s+ss;
    printf(" your total = %d",to);
    a=to/5.0;
    printf(" your average = %2f\n",a);
    if(t>=35&&e>=35&&m>=35&&s>=35&&ss>=35)
    {
        printf(" You are pass");
    }
    else
    {
        printf(" Sorry, you are fail ");
    }
    if(a>=80)
    {
        printf(" You are pass with class A");
    }
    else if (a>=60 && a>80)
    {
    printf("You are pass with class B");
    }
    else if (a>=40 && a>60)
    {
        printf("You are pass with class C");
    }
    else
    {
        printf("Sorry, you have no class");
        return 0;
    }
}