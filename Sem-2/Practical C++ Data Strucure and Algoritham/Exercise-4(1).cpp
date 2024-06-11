#include<iostream>
#include<stdlib.h>
#include<conio.h>

#include<math.h>
#include<ctype.h>

const int MAX=50;
using namespace std;


class postfix
{
    private:
        int stack[MAX];
        int top,m;
        char *s;

    public:
        postfix()
            { top=-1;};
        void setexpression(char *str);
        void push(int item);
        int pop();
        void calculate();
        void show();
};


void postfix::setexpression(char *str)
{
    s=str;
}

void postfix::push(int item)
{
    if(top==MAX-1)
    cout<<"Stack is full.";
    else
    {
        top++;
        stack[top]=item;
    }
}

int postfix::pop()
{
    if(top==-1)
    {
        cout<<"stack is empty.";
        return 0;
    }
    int data = stack[top];
    top--;
    return data;
}

void postfix::calculate()
{
    int n1,n2,n3;
    while(*s)
    {
        if(*s==' '|| *s=='\t')
        {
            s++;
            continue;
        }
        if(isdigit(*s))
        {
            m=*s-'0';
            push(m);
        }
        else
        {
            n1=pop();
            n2=pop();
            switch(*s)
            {
                case '+':   n3=n2+n1;
                            break;
                case '-':   n3=n2-n1;
                            break;
                case '*':   n3=n2*n1;
                            break;
                case '/':   n3=n2/n1;
                            break;
                default:    cout<<"Unknown operator";
                            exit(1);
            }
            push(n3);
        }
        s++;
    }
}

void postfix::show()
{
    m=pop();
    cout<<"Result is: "<<m;
}

int main()
{
    char expr[MAX];
    cout<<"\nEnter the postfix expression to be evaluated:";
    cin.getline(expr,MAX);
    postfix q;
    q.setexpression(expr);
    q.calculate();
    q.show();
}