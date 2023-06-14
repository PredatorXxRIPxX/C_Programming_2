#include<stdio.h>
int pgcd(int a,int b)
{
    if ((a-b)==0)
    {
        return a;
    }
    if ((a-b)>0)
    {
        return pgcd(a-b,b);
    }else if ((a-b)<0)
    {
        return pgcd(a,b-a);
    }    
}
int main()
{
    int a,b;
    printf("please give as two number a and b: ");
    scanf("%i%i",&a,&b);
    printf("%i",pgcd(a,b));
}