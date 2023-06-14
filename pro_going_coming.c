#include<stdio.h>
#include<math.h>
void goingcoming(int n);
int main()
{
    printf("give a number n ; ");
    int n;
    scanf("%i",&n);
    goingcoming(n);
    return 0;
}
void goingcoming(int n)
{
    if (n!=0)
    {
        printf("%i",n);
        goingcoming(n-1,);
    }
    printf("\n");
    if (n!=g+1)
    {
        printf("%i",n);
        goingcoming(n+1);
    }
    
    
}