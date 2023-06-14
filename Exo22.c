#include<stdio.h>
int max_min(int t[6],int i,int max,int min)
{
    if (i>6)
    {
        return max,min;
    }else
    {
        if (t[i+1]>=t[i])
        {
            max=i+1;
            return max_min(t,i+1,max,min);
        }else if (t[i]<=t[i+1])
        {
            min=i;
            return max_min(t,i+1,max,min);
        }
        
        
        
    }
    
    
}
int main()
{
    int t[6];
    for (size_t i = 0; i < 6; i++)
    {
        printf("give a element %i: ",i+1);
        scanf("%i",&t[i]);
    }
    int i=0;
    int max,min;
    printf("the max and min are: %i",max_min(t,i,max,min));
    return 0;
}