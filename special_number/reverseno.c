/*
     Program        : theater Seat Booking
     Author         : Lavanya.M
     Date           : 16/6/2025
     description    :This program help to reverse the given number.
     */
    #include<stdio.h>
    int main()
    {
        int i,n;
        printf(" Enter the number : ");
        scanf("%d", &n);
        while(n>0)
        {
            i=n%10;
            printf("%d", i);
            n=n/10;
        }
         return 0;
    }
    /*
    sample output :
            Enter the number :  189
            981

    */
