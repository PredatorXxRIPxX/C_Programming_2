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
    //printing;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("your value is : %i\n",ptr->value);
        ptr=ptr->link;
    }
    printf("in which position do you want to ad your next value .? ");
    int posi;
    scanf("%i",&posi);
    int count =1;
    ptr=head;
    if (posi==1)
    {
        printf("please give a number");
        struct node *newhead;
        newhead=malloc(sizeof(struct node));
        scanf("%i",&newhead->value);
        newhead->link=head;
        head=newhead;
    }else
    {
        for(int i=1;i<=n;i++)
        {
        if(count==posi)
        {
            struct node *newhead;
            newhead=malloc(sizeof(struct node));
            printf("give a value");
            scanf("%i",&newhead->value);
            newhead->link=ptr->link;
            ptr->link=newhead;
        }
        ptr=ptr->link;
        count++;
        }
    }
    
    

    ptr=head;
    while (ptr!=NULL)
    {
        printf("your value is: %i\n",ptr->value);
        ptr=ptr->link;
    }   
}
int main()
{
    printf("how many node do you want : ");
    int n;
    scanf("%i",&n);
    creating_nodes(n);
    return 0;
}