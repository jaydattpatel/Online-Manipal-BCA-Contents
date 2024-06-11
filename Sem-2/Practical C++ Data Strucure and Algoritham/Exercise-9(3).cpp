#include<iostream>
#include<conio.h>

#include<math.h>
using namespace std;

int main()
{
    int a,b,sum;
    cout<<"\nProgram to find sum of squares of two integers";
    cout<<"\nEnter the two integer numbers: ";
    cin>>a>>b;
    sum=(pow(a,2)+pow(b,2));
    cout<<"\nSum of squares of two integera numbers is: "<<sum<<endl;
    return 0;
}
