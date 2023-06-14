#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *link;
};
void creat_nodes(int n)
{
    struct node *head,*ptr,*tmp;
    head=malloc(sizeof(struct node));
    int num;
    printf("give a number ; ");
    scanf("%i",&num);
    head->value=num;
    head->link=NULL;
    ptr=head;
    for (size_t i = 0; i < n-1; i++)
    {
        printf("give a value to stock: ");
        scanf("%i",&num);
        tmp=malloc(sizeof(struct node));
        tmp->value=num;
        tmp->link=NULL;
        ptr->link=tmp;
        ptr=tmp;
    }
    //printing
    ptr=head;
    printf("this is your list: ");
    while (ptr!=NULL)
    {
        printf("%i   ",ptr->value);
        ptr=ptr->link;
    }
    int posi;
    printf("which position you want to delete: ");
    scanf("%i",&posi);
    ptr=head;
    for (size_t i = 0; i < posi; i++)
    {
        ptr=ptr->link;
    }
    struct node *nn;
    nn=ptr->link;
    ptr->link=ptr->link->link;
    free(nn);
    //printing
    ptr=head;
    printf("this is your list: ");
    while (ptr!=NULL)
    {
        printf("%i   ",ptr->value);
        ptr=ptr->link;
    }   
}
int main()
{
    int n;
    printf("give a the number of nodes you need: ");
    scanf("%i",&n);
    creat_nodes(n); 
}