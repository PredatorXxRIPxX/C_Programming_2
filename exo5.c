#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *linknext;
};
void creatnodes(int n)
{
    struct node *head , *tmp,*ptr;
    int num;
    printf("give us the first number : ");
    scanf("%i",&num);
    head=malloc(sizeof(struct node));
    head->value=num;
    head->linknext=NULL;
    ptr=head;
    for (size_t i = 1; i < n; i++)
    {
        printf("give as a value : ");
        scanf("%i",&num);
        tmp=malloc(sizeof(struct node));
        tmp->value=num;
        tmp->linknext=NULL;
        ptr->linknext=tmp;
        ptr=tmp;
    }
    printf("what number do you want to add to the end: ");
    scanf("%i",&num);
    struct node *new;
    new=malloc(sizeof(struct node));
    new->value=num;
    new->linknext=NULL;
    ptr->linknext=new;
    //printing
    tmp=head;
    while (tmp!=NULL)
    {
        printf("%i  ",tmp->value);
        tmp=tmp->linknext;
    }
}  
int main()
{
    int n;
    printf("how much nodes do you need : ");
    scanf("%i",&n);
    creatnodes(n);
}