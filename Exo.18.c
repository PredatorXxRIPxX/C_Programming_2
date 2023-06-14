#include<stdio.h>
int egy(int x,int y)
{
    if (x%2==0)
    {
        return (x/2)*(y*2);
    }else
    {
        return y+(x-1)*y;
    }
}
int main()
{
    int x,y;
    printf("give two numbers a and b: ");
    scanf("%i%i",&x,&y);
    printf("your result is: %i",egy(x,y));
    return 0;
}