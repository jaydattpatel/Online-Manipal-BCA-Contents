#include<iostream>
#include<stdlib.h>
#include<conio.h>

#define MAX 100
using namespace std;

struct job
{
    char id[5];
    int deadline;
    int profit;
};

int minvalue(int x,int y)
{
    if(x<y)
        return x;
    return y;
}

void jobSequenceingWithDeadLine(job jobs[],int n)
{
    int i,j,k,maxprofit;
    int timeslot[MAX];
    int filledTimeSlot = 0;
    int dmax=0;
    for(i=0; i<n; i++)
            if(jobs[i].deadline>dmax)
                    dmax = jobs[i].deadline;
    cout<<"\nTotal time slot : "<<dmax;
    for(i=1; i<=dmax; i++)
        timeslot[i] = -1;
    cout<<"\nNumber of jobs done : "<<dmax;
    for(i=1; i<=n; i++)
        {
            k = minvalue(dmax,jobs[i-1].deadline);
            while(k>=1)
                {
                    if(timeslot[k] == -1)
                        {
                            timeslot[k] = i-1;
                            filledTimeSlot++;
                            break;
                        }
                    k--;
                }
            if(filledTimeSlot == dmax)
                break;
        }
    cout<<"\nJobs done: \n ";
    for(i=1; i<=dmax ; i++)
        cout<<"\tJob "<<jobs[timeslot[i]].id<<" at time : "<<i<<endl;
    maxprofit = 0;
    for(i=1; i<=dmax; i++)
        maxprofit += jobs[timeslot[i]].profit;
    cout<<"\nTotal profit: "<<maxprofit;

}

int main()
{
    int i,j,n;
    job jobs[5];
    cout<<"\nEnter the number of jobs: ";
    cin>>n;
    for(i=0; i<n; i++)
        {
            cout<<"\nEnter the job : ";
            cin>>jobs[i].id;
            cout<<"\nEnter the profit : ";
            cin>>jobs[i].profit;
            cout<<"\nEnter deadline : ";
            cin>>jobs[i].deadline;
        }
    job temp;
    cout<<"\nJob(1)\t Profit\t Deadline\t Profit/Time\t \n\n";
    cout<<"--------------------------------------------------";
    for(i=0; i<n; i++)
        {
            cout<<"\n\n";
            cout<<jobs[i].id<<"\t\t"<<jobs[i].profit<<"\t\t"<<jobs[i].deadline<<"\t\t"<<jobs[i].profit;
        }
    for(i=1; i<n; i++)
        {
            for(j=0; j<n-i; j++)
                {
                    if(jobs[j+1].profit>jobs[j].profit)
                        {
                            temp = jobs[j+1];
                            jobs[j+1] = jobs[j];
                            jobs[j] = temp;
                        }
                }
        }
    cout<<"\n\nTotal number of jobs : "<<n<<endl;
    jobSequenceingWithDeadLine(jobs,n);
    return 0;
}
