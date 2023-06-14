#include<stdio.h>
int div(int a,int b)
{
    if (a==b)
    {
        return 1;
    }else
    {
        for (size_t i = 0; i < a/2; i++)
        {
            if (b*i==a)
            {
                return i;
            }
            
        }
        
    }
    
    
}
int mod(int a,int b,int i)
{
    int r;
    r=a-b*i;
    return r;
}
int main()
{
    int a,b;
    printf("give two numbers a and b: ");
    scanf("%i%i",&a,&b);
    
}