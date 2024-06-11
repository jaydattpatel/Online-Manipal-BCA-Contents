#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    int n,i,search,first,last,middle,arr[100];
    cout<<"\nEnter the array size:";
    cin>>n;
    cout<<"\nEnter the array elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter a value to search: ";
    cin>>search;
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
            first=middle+1;
        else if(arr[middle]==search)
            {
                cout<<"Key element is found at location: "<<middle+1<<"\n";
                break;
            }
        else
            {
                last=middle-1;
            }
        middle=(first+last)/2;
    }
    if(first>last)
        cout<<"\nKey element is not found";
    return 0;
}