#include<stdio.h>
#include<math.h>
int main()
{
    int a,b; char o;
    printf("welcome to the calculator simulator\n please give us your first number");
    scanf("%i",&a);
    printf("give us your operator");
    scanf("%i",&o);
    printf("give us your second number");
    scanf("%i",&b);
    switch (o)
    {
    case '+':
        printf("the result is %i",a+b);
        break;
        case '-':
        printf("the result is %i",a-b);
        break;
        case '*':
        printf("the result is %i", a*b);
        break;
        case '/':
        printf("the result is %i",a/b);
        break;

    
    default:
    printf("erreur");
        break;
    }
    return 0;

}