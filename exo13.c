#include<stdio.h>
#include<math.h>
int  power(int n)
{
    if (n!=0)
    {
        return pow(n,2)+power(n-1);
    }else
    {
        return 0;
    }
    
    
}
int main()
{
    int n;
    printf("give a number n : ");
    scanf("%i",&n);
    printf("%i",power(n));
}