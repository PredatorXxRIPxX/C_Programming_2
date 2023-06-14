#include<stdio.h>
#include<math.h>
int pgcd(int a ,int b)
{
    if ((a % b)==0)
    {
        return b;
    }else
    {
        return pgcd(b,a%b);
    }
    
    
}
int main()
{
    printf("give two numbers a and b: ");
    int a,b;
    scanf("%i%i",&a,&b);
    printf("\nyour result is %i",pgcd(a,b));
    return 0;
}