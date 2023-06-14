#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *nextlink;
};
void creatnodes(int n)
{
    struct node *head ,*ptr ,*tmp;
    head=malloc(sizeof(struct node));
    head->nextlink=NULL;
    ptr=head;
    for (size_t i = 1; i < n; i++)
    {
        tmp=malloc(sizeof(struct node));
        tmp->nextlink=NULL;
        ptr->nextlink=tmp;
        ptr=tmp;
    }
    int count;
    if (head==NULL)
    {
        printf("there is no list");
    }
    ptr=head;
    while (ptr!=NULL)
    {
        count++;
        ptr=ptr->nextlink;
    }
    printf("you have %i nodes",count);
    
}
int main()
{
    printf("how much nodes do you need: ");
    int n;
    scanf("%i",&n);
    creatnodes(n);
    return 0;
}