#include<stdio.h>
int som(int t[10],int i)
{
    if (i>=0)
    {
        return t[i]*som(t,i-1);
    }else
    {
        return 1;
    }    
}
int main()
{
    int t[10];
    for (size_t i = 0; i < 10; i++)
    {
        printf("give the element %i: ",i+1);
        scanf("%i",&t[i]);
    }
    int i=9;
    printf("your result is : %i",som(t,i));
    
}