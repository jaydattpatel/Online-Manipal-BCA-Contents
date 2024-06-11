#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int gdc(int m,int n)
{
    int r;
    while(n!=0)
        {
            r=m % n;
            m = n;
            n = r;
        }
        return m;
}

int main()
{
    int x,y;
    cout<<"\n Enter two positive integers:";
    cin>>x>>y;
    cout<<"\nGDC of two number ("<<x<<","<<y<<") = "<<gdc(x,y)<<endl;
    return 0;
}