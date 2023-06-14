#include<stdio.h>
int main()
{
    int a,b;
    printf("donner deux nombre a et b : ");
    scanf("%i",&a);
    scanf("%i",&b);
    if (a>b)
    {
        printf("le maximum est a %i",a);
    } else if (a<b)
    {
        printf("le maximum est b %i",b);
    }
    return 0;
    
    

}