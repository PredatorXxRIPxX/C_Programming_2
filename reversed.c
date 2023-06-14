#include<stdio.h>
void rev(int t[5])
{
    for (size_t i = 0; i <= 5; i++)
    {
        printf("%i",t[5-i]);
    }
    
}
int main()
{
    int t[5];
    for (size_t i = 0; i < 5; i++)
    {
        printf("welcome: ");
        scanf("%i",&t[i]);
    }
    rev(t);
    return 0;
}