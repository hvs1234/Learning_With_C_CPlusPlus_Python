#include<stdio.h>
#include<stdlib.h>

struct process
{
    int start_time,pid,at,bt,tat,wt,ct,rt;
} p[100];

int max(int a, int b)
{
    return a>b?a:b;
}

int main()
{
    int n;
    printf("Enter the no. of process: "); scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d arrival time: ",i);
        scanf("%d",&p[i].at);
        p[i].pid = i;
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d burst time: ",i);
        scanf("%d",&p[i].bt);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j].at>p[j+1].at)
            {
                struct process temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        p[i].start_time = (i==0)?p[i].at:max(p[i].at,p[i-1].ct);
        p[i].ct = p[i].start_time + p[i].bt;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;
        p[i].rt = p[i].wt;
        printf("\nStart_Time is: %d",p[i].start_time);
        printf("\nC_Time is : %d",p[i].ct);
        printf("\ntat is : %d",p[i].tat);
        printf("\nwt is : %d",p[i].wt);
        printf("\nrt is : %d",p[i].rt);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j].pid>p[j+1].pid)
            {
                struct process temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
        p[i].pid = i;
    }

    for(int i=0;i<n;i++)
    {
        printf("\nPid process is : %d",p[i].pid);
    }
    return 0;
}
