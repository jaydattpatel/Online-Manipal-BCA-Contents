#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    int i,num,n,c=0,pos,arr[10];
    cout<<"\nEnter the array size:";
    cin>>n;
    cout<<"\nEnter the array elements:";
    for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    cout<<"\nEnter the number to be searched:";
    cin>>num;
    for(i=0; i<n; i++)
        {
            if(arr[i]==num)
                {
                    c=1;
                    pos=i+1;
                    break;
                }
        }
    if(c==0)
        {
            cout<<"Number not found !";
        }
    else 
        {
            cout<<"Element found at position "<<pos;
        }
    return 0;
}