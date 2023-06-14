#include<stdio.h>
int main()
{
    int a;
    printf("give us the year ");
    scanf("%i",&a);
    if ((a%4)||(a%400)==0)
    {
        printf("it's a leap year");
    }else if (a%100)
    {
        printf("it's not a leap years");
    }
    return 0;
    
    
}