#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

void knapsack(int n,float weight[],float profit[],float capacity)
{
        float x[20],tp=0.0;
        int i,j,u;
        u=capacity;
        for(i=0; i<n; i++)
            x[i]=0.0;
        for(i=0; i<n; i++)
            {
                if(weight[i]>u)
                    break;
                else
                    {
                        x[i]=1.0;
                        tp=tp+profit[i];
                        u=u-weight[i];
                    }
            }
        if(i<n)
            x[i] = u/weight[i];
        tp = tp + (x[i]*profit[i]);
        cout<<"\nCumulative benifit is: "<<tp;
    
}

int main()
{
    float weight[20],profit[20],capacity;
    int num,i,j;
    float ratio[20],temp;
    cout<<"\nEnter the number of objects: ";
    cin>>num;
    cout<<"Enter the total capacity: ";
    cin>>capacity;
    cout<<"\nEnter ratio weight and profit: ";
    for(i=0; i<num; i++)
        {
            cout<<"\nItem "<<i+1<<" : ";
            cout<<"\n\tRatio : ";
            cin>>ratio[i];
            cout<<"\tweight : ";
            cin>>weight[i];
            cout<<"\tprofit : ";
            cin>>profit[i];
        }
    knapsack(num,weight,profit,capacity);
    return 0;
}