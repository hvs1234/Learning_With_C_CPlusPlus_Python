#include<stdio.h>
#include<limits.h>

struct process{
    int pid;
    int at;
    int bt;
    int wt, tat, ct, rt, start_time;
}ps[100];

int main(){
    int isComplete[100]={0};
    int isFirstProcess =1;
    int current_time = 0;
    int completed = 0;
    int prev=0;

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("\nEnter Process %d Arrival Time: ",i);
        scanf("%d",&ps[i].at);
        ps[i].pid = i ;
    }
    
    for(int i=0;i<n;i++){
        printf("\nEnter Process %d Burst Time: ",i);
        scanf("%d",&ps[i].bt);
    }

    while(n!=completed){
        int min_index=-1;
        int minimum= INT_MAX;
        for(int i=0; i<n; i++){
            if(ps[i].at<=current_time && isComplete[i]==0){
                if(ps[i].bt<minimum){
                    minimum = ps[i].bt;
                    min_index = i;
                }
                if(ps[i].bt== minimum) {
                    if(ps[i].at < ps[min_index].at) {
                        minimum= ps[i].bt;
                        min_index = i;
                    }
                }
            }
        }
        if(min_index==-1){
            current_time++;
        }
        else{
            ps[min_index].start_time = current_time;
            ps[min_index].ct = ps[min_index].start_time + ps[min_index].bt;
            ps[min_index].tat = ps[min_index].ct - ps[min_index].at;
            ps[min_index].wt = ps[min_index].tat - ps[min_index].bt;
            ps[min_index].rt = ps[min_index].wt;

            completed++;
            isComplete[min_index]=1;
            current_time = ps[min_index].ct;
            isFirstProcess = 0;  
        }
    }
    printf("\nProcess No.\tAT\tCPU Burst Time\tCT\tTAT\tWT\tRT\n");
    for(int i=0;i<n;i++)
    printf("%d\t\t%d\t%d\t\t%d\t%d\t%d\t%d\n",ps[i].pid,ps[i].at,ps[i].bt,ps[i].ct,ps[i].tat,ps[i].wt,ps[i].rt);
    return 0;
}
