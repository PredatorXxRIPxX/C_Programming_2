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
    int a;
    printf("which element you want us to search; ");
    scanf("%i",&a);
    ptr=head;
    int count=1;
    while (ptr!=NULL)
    {
        if (ptr->value==a)
        {
            printf("your element is in the node number ; %i ",count);
        }
        count++;
        ptr=ptr->link;
    }    
}  
int main()
{
    printf("give us how much nodes do you want ; ");
    int n;
    scanf("%i",&n);
    creat_nodes(n);
}