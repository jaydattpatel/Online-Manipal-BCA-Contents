#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    int n,i,min=0,max=0;
    int arr[100];
    cout<<"\nProgram to find maximum and minimum in set of n integer elements";
    cout<<"\nEnter the value of n:";
    cin>>n;
    cout<<"\nEnter "<<n<<" values:";
    for(i=0; i<n; i++)
        cin>>arr[i];
    min=arr[0];
    max=arr[0];
    for(i=1; i<n; i++)
        {
            if(arr[i]<min)
                min=arr[i];
            if(arr[i]>max)
                max=arr[i];    
        }
    cout<<"\nMaximum value is "<<max;
    cout<<"\nMinimum value is "<<min;
    return 0;

}