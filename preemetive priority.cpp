#include <iostream>
using namespace std;
int main()
{
    int n = 5; //number of processes to be scheduled
    int arrivalTime[n] = {0, 0, 6, 11, 12};
    int burstTime[n] = {4, 3, 7, 4, 2};
    int priority[n + 1] = {1, 2, 1, 3, 2};
    int x[n];


    int waitingTime[n], turnaroundTime[n], completionTime[n];
    int i, j, smallest, count = 0, time; // count -> number of processes completed
    double avg = 0, tt = 0, end;


    for (i = 0; i < n; i++)
        x[i] = burstTime[i];


    priority[n] = 10000;


    for (time = 0; count != n; time++)
    {
        smallest = n;
        for (i = 0; i < n; i++)
        {
            if (arrivalTime[i] <= time && priority[i] < priority[smallest] && burstTime[i] > 0)
                smallest = i;
        }
        burstTime[smallest]--;
        if (burstTime[smallest] == 0)
        {
            count++;
            end = time + 1;
            completionTime[smallest] = end;
            waitingTime[smallest] = end - arrivalTime[smallest] - x[smallest];
            turnaroundTime[smallest] = end - arrivalTime[smallest];
        }
    }
    cout << "Process"
        << "\t  "
        << "burst-time"
        << "\t "
        << "arrival-time"
        << "\t "
        << "waiting-time"
        << "\t"
        << "turnaround-time"
        << "\t "
        << "completion-time"
        << "\t"
        << "Priority" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "p" << i + 1 << "\t\t" << x[i] << "\t\t" << arrivalTime[i] << "\t\t" << waitingTime[i] << "\t\t" << turnaroundTime[i] << "\t\t" << completionTime[i] << "\t\t" << priority[i] << endl;
        avg = avg + waitingTime[i];
        tt = tt + turnaroundTime[i];
    }
    cout << "\n\nAverage waiting time time = " << avg / n;
    cout << "  Average turnaround time time = " << tt / n << endl;
}
