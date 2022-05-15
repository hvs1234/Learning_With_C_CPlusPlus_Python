#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *next;
} n;
n *addempty(n *tail, int data)
{
    n *ptr = malloc(sizeof(n));
    ptr->data = data;
    ptr->next = ptr;
    return ptr;
}
n *addfirst(n *tail, int data)
{
    n *ptr = malloc(sizeof(n));
    ptr->data = data;
    ptr->next = tail->next;
    tail->next = ptr;
    return tail;
}
n *addmiddle(n *tail, int data, int pos)
{
    n *p = tail->next;
    n *ptr = malloc(sizeof(n));
    ptr->data = data;
    ptr->next = NULL;
    while(pos>1)
    {
        p = p->next;
        pos--;
    }
    ptr->next = p->next;
    p->next = ptr;
    if(p==tail){
        tail = tail->next;
    }
    return tail;
}
n *addend(n *tail, int data)
{
    n *ptr = malloc(sizeof(n));
    ptr->data = data;
    ptr->next = NULL;
    ptr->next = tail->next;
    tail->next = ptr;
    tail = tail->next;
    return tail;
}
int main()
{
    n *tail;
    tail = addempty(tail,26);
    tail = addfirst(tail,25);
    tail = addmiddle(tail,62,3);
    tail = addend(tail,963);
    n *ptr = tail->next;
    do{
        printf("%d ",ptr->data);
        ptr = ptr->next;
    } while(ptr!=tail->next);
    return 0;
}
