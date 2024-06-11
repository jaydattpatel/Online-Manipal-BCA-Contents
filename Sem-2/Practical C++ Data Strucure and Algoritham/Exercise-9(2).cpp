#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int fact(int n)
{   if(n==0) 
        return 1;
    return(n*fact(n-1)); 
}

int main()
{
    int num,output;
    cout<<"Enter numbers: ";
    cin>>num;
    output = fact(num);
    cout<<"\nThe factorial of "<<num<<" numbers is: "<< output<<endl;
    return 0;
}




