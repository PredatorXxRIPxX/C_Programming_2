#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *link;
};
void creatnodes(int n)
{
    struct node *head,*tmp,*ptr;
    head=malloc(sizeof(struct node));
    printf("give us a number to stock; ");
    int num;
    scanf("%i",&num);
    head->value=num;
    head->link=NULL;
    ptr=head;
    for (size_t i = 1; i < n; i++)
    {
        tmp=malloc(sizeof(struct node));
        printf("give a number: ");
        scanf("%i",&num);
        tmp->value=num;
        tmp->link=NULL;
        ptr->link=tmp;
        ptr=tmp;
    }
    if (head==NULL)
    {
        printf("this list doesn't existe!");
    }else
    {
        ptr=head;
        while (ptr!=NULL)
        {
            printf("%i  ",ptr->value);
            ptr=ptr->link;

        }
        
    }
    
}
int main()
{   int n;
    printf("how much nodes do you need: ");
    scanf("%i",&n);
    creatnodes(n);
    return 0;
}