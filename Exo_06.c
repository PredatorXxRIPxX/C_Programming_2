#include<stdio.h>
int main()
{
    int a;
    do
    {
        printf("donner un nombre entre 0 et 20");
        scanf("%i",&a);
    } while ((a<0)||(a>20));
    printf("Brevo!!!!");
    return 0;
    
}