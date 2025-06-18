#include<stdio.h>
void main()
{
    char str[40];
    printf("Enter a string : ");
    scanf("%s",str);
    gets(str);
    printf("%s", str);

}