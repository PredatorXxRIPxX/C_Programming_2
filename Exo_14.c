#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("donner votre a\n");
    scanf("%i",&a);
    printf("donner votre b\n");
    scanf("%i",&b);
    printf("donner votre c\n");
    scanf("%i",&c);
    printf("donner votre d\n");
    scanf("%i",&d);
    if ((c<a)&&(a<d)&&(b>d))
    {
        printf("%i",a);
        printf("%i",b);
    }
    if ((c<b)&&(b<d)&&(a<c))
    {
        printf("%i",c);
        printf("%i",b );
    }
    if ((c<a)&&(a<d)&&(c<b)&&(b<d))
    {
        printf("%i",a);
        printf("%i",b);
    }
    if ((a<c)&&(c<b)&&(d>b))
    {
        printf("%i",c);
        printf("%i",b);
    }
    if ((c<a)&&(a<d)&&(d<b))
    {
        printf("%i",a);
        printf("%i",d);
    }
    if ((a<c)&&(c<b)&&(a<d)&&(d<b))
    {
        printf("%i",c);
        printf("%i",d);
    }
    if ((a=c)&&(b=d))
    {
        printf("%i",a);
        printf("%i",b);
    }
    if ((a<c)&&(b<c)||(a>d)&&(b>d))
    {
        printf("l'ensembe est vide");
    }
    return 0;

    
    
    
    
    
    
    
    
}