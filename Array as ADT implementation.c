#include<stdio.h>
#include<stdlib.h>
struct myarray
{
    int t_s; int u_s;
    int *ptr;
};
void create_array(struct myarray *a, int tsize, int usize)
{
    a->t_s = tsize;
    a->u_s = usize;
    a->ptr = (int *)malloc(tsize*sizeof(int));
}
void show(struct myarray *a)
{
    int i=0,n;
    for(int i=0;i<a->u_s;i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
}
void setval(struct myarray *a) { int n,i=0; for(int i=0;i<a->u_s;i++) { printf("Enter element: %d",i);
        scanf("%d",&n);
        (a->ptr)[i] = n; } }

int main()
{
     struct myarray data;
     create_array(&data,10,2);
     printf("\nWe are running the values:"); setval(&data);
     printf("\nNow running the values:"); show(&data);
     return 0;
}
