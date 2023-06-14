#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *link;
};
void creating_nodes(int n)
{
    struct node *head,*tmp,*ptr;
    head=malloc(sizeof(struct node));
    printf("please give a number : ");
    int num;
    scanf("%i",&num);
    head->value=num;
    head->link=NULL;
    ptr=head;
    for (size_t i = 0; i < n-1; i++)
    {
        printf("give  a number to stock : ");
        tmp=malloc(sizeof(struct node));
        scanf("%i",&num);
        tmp->value=num;
        tmp->link=NULL;
        ptr->link=tmp;
        ptr=tmp;
    }
    //printing
    ptr=head;
    printf("these are the element of your list: \n");
    while (ptr!=NULL)
    {
        printf("%i   ",ptr->value);
        ptr=ptr->link;
    }
    printf("these is your list after deleting the first node ; \n");
    head=head->link;
    ptr=head;
    //printing
    while (ptr!=NULL)
    {
        printf("%i   ",ptr->value);
        ptr=ptr->link;
    }
    printf("\nthinks for using ;)");
}
int main()
{
    printf("please give a number of nodes you need: ");
    int n;
    scanf("%i",&n);
    creating_nodes(n);
}
