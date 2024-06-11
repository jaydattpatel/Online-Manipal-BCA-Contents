#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class queue
{
    public:
    int q[10],front,rear,x,result;
    void Enqueue();
    void Dequeue();
    void display();
    queue()
    {
        front=0;
        rear=0;
    }
};

void queue::Enqueue()
{
    if(rear>=10)
    cout<<"\nQueue Overflow\n";
    else
    {
        cout<<"\nEnter number to be inserted:";
        cin>>x;
        rear++;
        q[rear]=x;
        cout<<"\nNumber inserted in queue:"<<q[rear];
    }
}

void queue::Dequeue()
{
    if(rear==0)
    cout<<"\nQueue underflow!\n";
    else
    {
        if(front==rear)
        {
            front=0;
            rear=0;
        }
        else
        front++;
    }
    result=q[front];
}

void queue::display()
{
    if(rear==0)
    cout<<"\nQueue underflow\n";
    else
    cout<<"\nContents of queue:";
    for(int i=front+1;i<=rear;i++)
    cout<<q[i]<<"\t";
}

int main()
{
    int c;
    queue qu;
    do
    {
        cout<<"\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n";
        cout<<"\nEnter your choice:";
        cin>>c;
        switch (c)
        {
            case 1: qu.Enqueue();
                    break;
            case 2: qu.Dequeue();
                    break;
            case 3: qu.display();
                    break;
            case 4: exit(0);
                    break;
            default:cout<<"Please enter valid number........";
                    break;
        }
    }while(c<=4);
    return(0);
}