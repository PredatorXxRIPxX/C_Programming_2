#include<stdio.h>
void binaire(int n)
{
    if (n/2==0)
    {
        printf("%i",n%2);
    }else
    {
        printf("%i",n%2);
        binaire(n/2);
    }
    
    
}
int main()
{
    int n;
    printf("give your number: ");
    scanf("%i",&n);
    binaire(n);
    return 0;
}