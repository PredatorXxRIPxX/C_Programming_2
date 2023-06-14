#include<stdio.h>
#include<math.h>
void inverted(int t[10],int i)
{
    if (i!=0)
    {
        printf("%i",t[i-1]);
        printf("\n");
        i=i-1;
        inverted(t,i);
    }
    
}
int main()
{
    int t[10];
    for (size_t i = 0; i < 10; i++)
    {
        printf("give element %i: ",i+1);
        scanf("%i",&t[i]);
    }
    int i=10;
    inverted(t,i);
}