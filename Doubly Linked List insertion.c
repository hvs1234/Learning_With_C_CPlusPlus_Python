#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *prev;  struct node *next;
} n;
n *addempty(n *head, int data)
{
    n *ptr = malloc(sizeof(n));
    ptr->prev = NULL;
    ptr->data = data;
    ptr->next = NULL;
    head = ptr;
    return head;
}
n *addfirst(n *head, int data)
{
    n *ptr = malloc(sizeof(n));
    ptr->prev = NULL;
    ptr->data = data;
    ptr->next = NULL;
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
    return head;
}
n *addmiddle(n *head, int data, int p)
{
    n *newp = NULL;
    n *temp = head;
    n *temp2 = NULL;
    newp = addempty(newp,data);
    while(p!=1){
        temp = temp->next;
        p--;
    }
    if(temp->next == NULL)
    {
        temp->next = newp;
        newp->prev = temp;
    }
    else{
        temp2 = temp->next;
        temp->next = newp;
        temp2->prev = newp;
        newp->next = temp2;
        newp->prev = temp;
    }
    return head;
}
n *addend(n *head, int data)
{
    n *ptr = malloc(sizeof(n));
    n *p;
    ptr->prev = NULL;
    ptr->data = data;
    ptr->next = NULL;
    p = head;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;
    return head;
}
n *cl(n *head)
{
    int n,data,i;
    printf("\n\nEnter total no.of nodes: "); scanf("%d",&n);
    if(n==0) return head;
    printf("\n\nEnter the node at 1: "); scanf("%d",&data);
    head = addempty(head,data);
    for(i=1;i<n;i++)
    {
        printf("\n\nEnter the node at %d: ",i+1); scanf("%d",&data);
        head = addend(head,data);
    }
    return head;
}
int main()
{
    n *head = NULL;
    n *ptr = malloc(sizeof(n));
    head = cl(head);
    head = addfirst(head,64);
    head = addend(head,11);
    head = addmiddle(head,3,2);
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
