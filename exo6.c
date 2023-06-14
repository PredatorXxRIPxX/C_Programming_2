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
    printf("what number do you want to add to the at the middle: ");
    scanf("%i",&num);
    struct node *new;
    new=malloc(sizeof(struct node));
    new->value=num;
    new->linknext=NULL;
    tmp=head;
    int count=1;
    for(size_t i=1; i<=n ;i++)
    {
        if(i==n/2)
        {
            new->linknext=tmp->linknext->linknext;
            tmp->linknext=new;
        }
        tmp=tmp->linknext;
        //count++;
    }
    
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
    printf("please give us the nember of nodes that you want to creat: ");
    scanf("%i",&n);
    while (n%2 !=0)
    {
       printf("please give a even number");
       scanf("%i",&n);
    }
    
    creatnodes(n);
}