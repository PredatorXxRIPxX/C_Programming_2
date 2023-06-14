#include<stdio.h>
#include<string.h>
void gg(char t[10])
{
    for (size_t i = 0; i <= strlen(t); i++)
    {
        printf("%c",t[strlen(t)-i]);
    }
    
}
int main()
{
    char t[10];
    printf("donner votre script; ");
    gets(t);
    gg(t);
}