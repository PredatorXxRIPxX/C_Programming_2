#include<stdio.h>
#include<math.h>
#include<string.h>
int courante(char c[10],char n,int i);
int main()
{
    printf("give a script: ");
    char c[10];
    gets(c);
    printf("please give your n: ");
    char n;
    scanf("%c",&n);
    int i=10;
    int *p=&i;
    printf("%i",courante(c[10],n,i));
    return 0;
}
int courante(char c[10],char n,int i)
{
    if (i>0)
    {
        if (c[i]==n)
        {
            return 1+courante(c[10], n,i--);
        }else
        {
            return 0+courante(c[10],n,i--);
        }
    }else
    {
        if (c[0]==n)
        {
            return 1;
        }else
        {
            return 0;
        }
        
        
    }
    
    
}