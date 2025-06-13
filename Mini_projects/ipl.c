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
    printf(" Your remaining over = %d",ro);
    rr=s/o;
    printf(" Your current run rate = %2f",rr);
    p1=s+(ro*rr);
    p2=s+(ro*(ro+2));
    p3=s+(ro*(ro+5));
    printf(" Your projected score = ",p1);
    printf(" Your projected score = ",p2);
    printf(" Your projected score = ",p3);
    return 0;

}
