#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class mergeSort
{
    public:
        int no_of_elements;
        int elements[10];
        void getarray();
        void partition(int [],int,int);
        void sort_it(int[],int,int,int);
        void display();
};

void mergeSort::getarray()
{
    cout<<"\nEnter the array size";
    cin>>no_of_elements;
    cout<<"\nEnter the array element to sort: ";
    for(int i=0; i<no_of_elements; i++)
        {
            cin>>elements[i];
        }
}

void mergeSort::partition(int element[],int low,int high)
{
    int mid;
    if(low<high)
        {
            mid=(low+high)/2;
            partition(element,low,mid);
            partition(element,mid+1,high);
            sort_it(element,low,mid,high);

        }
}

void mergeSort::sort_it(int element[],int low,int mid,int high)
{
    int i,j,k,l,b[20];
    l=low;
    i=low;
    j=mid+1;
    while((l<=mid)&&(j<=high))
        {
            if(element[l]<=element[j])
                {
                    b[i]=element[l];
                    l++;
                }
            else    
                {
                    b[i]=element[j];
                    j++;
                }
            i++;
        }
        if(l>mid)
            {
                for(k=j; k<=high; k++)
                    {
                        b[i]=element[k];
                        i++;
                    }
            }
        else
            {
                for(k=l; k<=high; k++)
                    {
                        b[i]=element[k];
                        i++;
                    }
            }
        for(k=low; k<=high; k++)
            {
                element[k] = b[k];
            }
}

void mergeSort::display()
{
    cout<<"\nThe sorted elements:";
    for(int i=0; i<no_of_elements; i++)
        {
            cout<<elements[i]<<" ";
        }
}

int main()
{
    mergeSort ms;
    ms.getarray();
    ms.partition(ms.elements,0,ms.no_of_elements);
    ms.display();
    return 0;
}