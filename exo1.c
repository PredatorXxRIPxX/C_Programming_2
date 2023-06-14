#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n;
    scanf("%i",&n);
    p=&n;
    printf("the adress is ; %i\n",p);
    printf("the result is: %d",*p);
}