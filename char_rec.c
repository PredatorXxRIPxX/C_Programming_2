#include<stdio.h>
#include<string.h>
void gg(char r[10],int s)
{
    if (s>=0)
    {
        printf("%c",r[s]);
        s=s-1;
        gg(r,s);
    }
    
}
int main()
{
    char r[10];int s;
    printf("give a script ; ");
    gets(r);
    s=strlen(r);
    gg(r,s);
}