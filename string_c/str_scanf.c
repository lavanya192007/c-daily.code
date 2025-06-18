#include<stdio.h>
int main()
{
    char str[40];
    printf("Enter a string : ");
    scanf("%s",str);
    gets(str);
    printf("%s", str);
    return 0;

}