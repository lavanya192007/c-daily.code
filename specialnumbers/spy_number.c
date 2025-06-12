#include<stdio.h>
int main()
{
    int n,i,s=0,m=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(n>0)
    {
        i=n%10;
        s=s+i;
        m=m*i;
        n=n/10;
    }
    if(s==m)
{
    printf("It is spy number");
}
else
{ 
    printf(" It is not spy number");
}
return 0;
}