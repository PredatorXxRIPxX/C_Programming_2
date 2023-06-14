#include<stdio.h>
#include<math.h>
int rec(int t[10],int i)
{
    if (i<0)
    {
        return 0;
    }else
    {
        if (t[i]>=0)
        {
            return t[i]+rec(t,i-1);
        }else
        {
            return rec(t,i-1);
        }
        
        
    }
    
    
}
int main()
{
    int t[10];
    for (size_t i = 0; i < 10; i++)
    {
        printf("give a number %i: ",i+1);
        scanf("%i",&t[i]);
    }
    int i=9;
    printf("your result is: %i",rec(t,i));
}