#include<iostream>
#include<stdlib.h>
#include<conio.h>

#define MAX 10

using namespace std;

class stk
{
    int maxstk,top,n,i,a[MAX];
    char ch;
    public:
    stk()
        {
            top=-1;
        }
    void push();
    void pop();
    void display();
};

void stk::push()
{
    if(top>=MAX-1)
    {
        cout<<"\nStack Overflow"<<endl;
    }
    else
    {
        top++;
        cout<<"Enter the elements to be pushed:";
        cin>>n;
        a[top]=n;
    }
}

void stk::pop()
{
    if(top<0)
    {
        cout<<"\nStack Underflow"<<endl;
    }
    else
    {
        n=a[top];
        top--;        
    }
}
void stk::display()
{
    cout<<"After operation, the elements of stack:";
    for(i=0;i<=top;i++)
        {
            cout<<a[i]<<"\t";
        }
}

int main()
{
    stk s;
    int ch;
    while(1)
    {
        cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        switch (ch)
        {
            case 1: s.push();
                    break;
            case 2: s.pop();
                    break;
            case 3: s.display();
                    break;
            case 4: exit(0);
                    break;
            default:cout<<"Please enter valid number........";
                    break;
        }    
    }
    return(0);
}
