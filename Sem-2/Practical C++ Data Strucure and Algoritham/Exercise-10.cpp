#include<iostream>
#include<stdlib.h>
#include<conio.h>

#include<ctype.h>
using namespace std;

struct node
{
    int distanceValue;
    int status;
    char data;
    int weight;
    struct node *next;
    struct node *adj;
};

class graph
{
    private:
        node *start;
    public:
    graph()
        {
            create();
        }   
    struct node *p,*q,*k,*l;
    void create();
    int sputil(char vt);
    char getstart();
};

char graph::getstart()
{
    return start->data;
}

void graph::create()
{
    int flag=0,weight;
    char dat;
    start=NULL;
    cout<<"Enter the nodes in the graph(press x to exit): \n";
    while(1)
        {
            cin>>dat;
            if(dat=='x')
                break;
            p=new node;
            p->data=dat;
            p->status=0;
            p->next=NULL;
            p->adj=NULL;
            if(flag==0)
                {
                    start=p;
                    q=p;
                    flag++;
                }
            else
                {
                    q->next=p;
                    q=p;
                }
        }
    p=start;
    while(p!=NULL)
        {
            cout<<"Enter the links to "<<p->data<<"(x to exit): ";
            flag=0;
            while(1)
                {
                    cin>>dat;
                    if(dat=='x')
                        break;
                    k=new node;
                    k->adj=NULL;
                    if(flag==0)
                        {
                            p->adj=k;
                            l=k;
                            flag++;
                        }
                    else
                        {
                            l->adj=k;
                            l=k;
                        }
                    q=start;
                    while(q!=NULL)
                        {
                            if(q->data==dat)
                                k->next=q;
                            q=q->next;
                        }
                }
                p=p->next;
        }
    p=start;
    k=p->adj;
    while(p!=NULL)
        {
            if(k!=NULL)
                {
                    q=k->next;
                    cout<<"Enter the weight of edge : "<<p->data<<"---"<<q->data<<": ";
                    cin>>k->weight;
                    k=k->adj;
                }
            else 
                {
                    p=p->next;
                    k=p->adj;
                }
        }
    return;
}

int graph::sputil(char vt)
{
    node *m=NULL;
    int LowDv;
    p=start;
    while(p!=NULL)
        {
            if(p->data!=start->data)
                p->distanceValue=9999;
            else
                p->distanceValue=0;
            p->status=0;
            p=p->next;
        }
    while(1)
        {
            p=start;
            LowDv =9999;
            while(p!=NULL)
                {
                    if(p->distanceValue<=LowDv&&p->status!=1)
                        {
                            LowDv=p->distanceValue;
                            q=p;
                        }
                    p=p->next;
                }
            if(q->data==vt)
                    break;
            k=q->adj;
            q->status=1;
            while(k!=NULL)
                {
                    m=k->next;
                    if((q->distanceValue + k->weight)<(m->distanceValue))
                            m->distanceValue = q->distanceValue + k->weight;  
                    k=k->adj;
                }    
        }
    return q->distanceValue;
}

int main()
{
    char vs,vt;
    int shortestDistance=0;
    graph graphobj;
    vs = graphobj.getstart();
    cout<<"\nEnter the terminal vertex: ";
    cin>>vt;
    shortestDistance=graphobj.sputil(vt);
    cout<<"\nThe shortest distance between "<<vs<<" and "<<vt<<" is : "<<shortestDistance;
    return 0;
}