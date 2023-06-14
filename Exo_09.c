#include<stdio.h>
#include<string.h>

int main()
{
    char a;
    printf("donner votre mois: ");
    scanf("%s",&a);
    switch (a)
    {
    case 'Janvier':
        printf("01");
        break;
        case 'Fevrier':
        printf("02");
        break;
        case 'Mars':
        printf("03");
        break;
        case 'april':
        printf("04");
        break;
        case 'may':
        printf("05");
        case 'june':
        printf("06");
        break;
        case 'july':
        printf("07");
        break;
        case 'Aug':
        printf("08");
        break;
        case ('sep'):
        printf("09");
        break;
        case ('oct'):
        printf("10");
        break;
        case 'nov':
        printf("11");
        break;
        case 'dec':
        printf("12");
        break;


        
    
    default:
    printf("ce mois n'existe pas ");
        break;
    }
    return 0;
}