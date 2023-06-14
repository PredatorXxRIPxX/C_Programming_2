#include<stdio.h>
int main()
{
    int a;
    printf("donner votre mois : ");
    scanf("%i",&a);
    switch (a)
    {
    case 1:
        printf("il a 31 jours");
        break;
        case 2:
        printf("il a 28 jours");
        break;
        case 3:
        printf("il a 31 jours");
        break;
        case 4:
        printf("il a 30 jours");
        break;
        case 5:
        printf(" il a 31 jours");
        break;
        case 6:
        printf(" il a 30 jours");
        break;
        case 7:
        printf("il a 31 jours");
        break;
        case 8:
        printf("il a 31 jours");
        break;
        case 9:
        printf("il a 30 jours");
        break;
        case 10:
        printf("il a 31 jours");
        break;
        case 11:
        printf("il a 30 jours");
        break;
        case 12:
        printf("il a 31 jours");
        break;
    
    default:
    printf("ce mois n'existe pas ");
        break;
    }
    return 0;
}