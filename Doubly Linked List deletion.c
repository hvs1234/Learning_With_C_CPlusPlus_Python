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
n *deletefirst(n *head)
{
    n *ptr = head;
    head = head->next;
    free(ptr);
    ptr = NULL;
    head->prev = NULL;
    return head;
}
n *deletelast(n *head)
{
    n *temp = head;
    n *temp2;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    return head;
}
n *deletemiddle(n *head, int p)
{
    n *temp = head;
    n *temp2 = NULL;
    if(p==1) head = deletefirst(head);
    while(p>1){
       temp = temp->next;
       p--;
    }
    if(temp->next==NULL){
        head = deletelast(head);
    } 
    else{
        temp2 = temp->prev;
        temp2->next = temp->next;
        temp->next->prev = temp2;
        free(temp);
        temp = NULL;
    }
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
    head = deletemiddle(head,2);
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
