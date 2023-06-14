#include<stdio.h>
int main()
{
    int j,m;
    printf("donner votre jour");
    scanf("%i",&j);
    printf("donner votre mois");
    scanf("%i",&m);
    if ((j<30)&&(j>1)&&(m=06))
    {
        printf("%i",j,"/ %i",m,"Summer");

    }
    if ((j>=1)&&(j<=31)&&(m=07))
    {
                printf("%i",j,"/ %i",m,"Summer");

    }
    if ((j>=1)&&(j<=21)&&(m=8))
    {
        printf("%i",j,"/ %i",m,"Summer");

    }
    if ((j>21)&&(j<=31)&&(m=8))
    {
        printf("%i",j,"/ %i",m,"autumn");

    }
    if ((j>=1)&&(j<=30)&&(m=9))
    {
        printf("%i",j,"/ %i",m,"autumn");

    }
    if ((j>=1)&&(j<=31)&&(m=10))
    {
        printf("%i",j,"/ %i",m,"automn");

    }
    if ((j>=1)&&(j<=21)&&(m=11))
    {
        printf("%i",j,"/ %i",m,"automn");

    }
    if ((j>21)&&(j<30)&&(m=11))
    {
        printf("%i",j,"/ %i",m,"winter");
    }
    if ((j>=1)&&(j<=31)&&(m=12))
    {
        printf("%i",j,"/ %i",m,"winter");
    }
    if ((j>=1)&&(j<=31)&&(m=01))
    {
        printf("%i",j,"/ %i",m,"winter");
    }
    if ((j>=1)&&(j<=21)&&(m=02))
    {
        printf("%i",j,"/ %i",m,"winter");

    }
    if ((j>21)&&(j<=28)&&(m=02))
    {
        printf("%i",j,"/ %i",m,"Spring");

    }
    if ((j>=1)&&(j<=31)&&(m=03))
    {
        printf("%i",j,"/ %i",m,"Spring");
    }
    if ((j>=1)&&(j<=30)&&(m=04))
    {
        printf("%i",j,"/ %i",m,"spring");

    }
    if ((j>=1)&&(j<=21)&&(m=05))
    {
        printf("%i",j,"/ %i",m,"spring");
    }
    if ((j>21)&&(j<=31)&&(m=05))
    {
        printf("%i",j,"/ %i",m,"Spring");
    }
  return 0;  
 }