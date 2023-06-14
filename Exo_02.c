#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,p;
    printf("donner votre nombre n: ");
    scanf("%i",&n);
    printf("dooner votre nombre m: ");
    scanf("%i",&m);
    if ((n==0)||(m==0))
    {
        printf("le produit est nul");
    }
p=m*n;
if (p>0)
{
    printf("votre nombre est positif");
}else if (p<0)
{
   printf("votre nombre est negatif");
}



return 0;



    
}