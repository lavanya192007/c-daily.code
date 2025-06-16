/*
    Program     : IPL score predictor
    Author      : Lavanya.M
    Date        : 16-06-2025
    Description:
       This program claculate the projected score based on remaining overs and current run rate.
       */
         
    



#include<stdio.h>
int main()
{
    int s,o,p1,p2,p3,ro;
    float rr;
    printf(" Enter your over now : ");
    scanf("%d", &o);
    printf("Enter your current score : ");
    scanf("%d", &s);
    ro=20-o;
    printf(" Your remaining over = %d\n",ro);
    rr=s/o;
    printf(" Your current run rate = %2f\n",rr);
    p1=s+(ro*rr);
    p2=s+(ro*(rr+2));
    p3=s+(ro*(rr+5));
    printf(" Your projected score = %d\n ",p1);
    printf(" Your projected score =%d\n ",p2);
    printf(" Your projected score =%d\n ",p3);
    return 0;

}
