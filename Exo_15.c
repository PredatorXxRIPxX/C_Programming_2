#include<stdio.h>
int main()
{
    int a;
    printf("donner votre nombre d'enfant");
    scanf("%i",&a);
    if (a<3)
    {
        printf("vous devez payez %i",200*a);
        
    }else if ((a>3)&&(a<=6))
    {
        printf("vous devez payez %i",600+(a-3)*50);
    }else if (a>6)
    {
        printf("vous devez payez %i",600+3*50);
    }
    return 0;
    
    
    
}