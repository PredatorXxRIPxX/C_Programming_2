#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *linknext;
};
void creatnodes(int n)
{
    struct node *head,*tmp,*ptr;
    head=malloc(sizeof(struct node));
    printf("give us a number to stock; ");
    int num;
    scanf("%i",&num);
    head->value=num;
    head->linknext=NULL;
    ptr=head;
    for (size_t i = 1; i < n; i++)
    {
        tmp=malloc(sizeof(struct node));
        printf("give a number: ");
        scanf("%i",&num);
        tmp->value=num;
        tmp->linknext=NULL;
        ptr->linknext=tmp;
        tmp=head;
    }
    //inverting
    struct node *prvnode,*curnode;
    if ( head!=NULL)
    {
        prvnode=head;
        curnode=head->linknext;
        head=head->linknext;
        prvnode->linknext=NULL;   
    }
    while (head!=NULL)
    {
        head=head->linknext;
        curnode->linknext=prvnode;
        prvnode=curnode;
        curnode=head;
    }
    
    head=prvnode;
    //printg
    tmp=head;
    while (tmp!=NULL)
    {
        printf("%i  ",tmp->value);
        tmp=tmp->linknext;
    }
    printf("\n thinks for using ");
    
    
}
int main()
{
    printf("how much nodes do you need ; ");
    int n;
    scanf("%i",&n);
    creatnodes(n);
    return 0;
}