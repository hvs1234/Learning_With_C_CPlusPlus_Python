#include<stdio.h>
typedef struct g
{
    int pid,at,bt,ct,tat,wt;
} g1;

int main()
{
    int p; printf("Enter no. of processes: "); scanf("%d",&p);
    g1 a[p],t; int sum=0;
    printf("Enter arrival and burst time: ");
    for(int i=0;i<p;i++)
    {
        a[i].pid = i+1;
        scanf("%d %d",&a[i].at,&a[i].bt);
    }  
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p-1;j++)
        {
            if(a[j].at>a[j+1].at)
            {
                t = a[i]; a[j] = a[j+1]; a[j+1] = t;
            }
        }
    }
    for(int i=0;i<p;i++)
    {
        if(a[i].at>sum)
        {
           sum+=a[i].bt+a[i].at-sum;
        }
        else{
            sum+=a[i].bt;
        }
        a[i].ct = sum;
        a[i].tat = a[i].ct-a[i].at;
        a[i].wt = a[i].tat-a[i].bt;
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p-1;j++)
        {
            if(a[j].pid>a[j+1].pid)
            {
                t = a[i]; a[j] = a[j+1]; a[j+1] = t;
            }
        }
    }
    for(int i=0;i<p;i++)
    {
        printf("%d %d %d %d %d %d",a[i].pid,a[i].at,a[i].bt,a[i].ct,a[i].tat,a[i].wt);
    }
    return 0;
}
