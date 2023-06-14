#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *linkprv;
    int n;
    struct node *linknext;

};
void creat_nodes(int n)
{
    struct node *head,*tmp,*ptr;
    printf("give a number : ");
    int num;
    scanf("%i",&num);
    head=malloc(sizeof(struct node));
    head->linknext=NULL;
    head->linkprv=NULL;
    head->n=num;
    ptr=head;
    for (size_t i = 0; i < n; i++)
    {
        printf("give a num: ");
        scanf("%i",&num);
        tmp=malloc(sizeof(struct node));
        tmp->linknext=NULL;
        tmp->linkprv=NULL;
        tmp->n=num;
        ptr->linknext=tmp->linkprv;
        ptr=tmp;
    }
    ptr=head;
    while (tmp!=NULL)
    {
        printf("%i  ",ptr->n);
        ptr=ptr->linknext;
    }
}
int main()
{
    printf("how much nodes do you need; ");
    int n;
    scanf("%i",&n);
    creat_nodes(n);
}