#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	struct node *link;
};

class linkedlist
{
	private: 
	node* start;
	
	public:
	linkedlist()
	{
		start = NULL;
	}
	void InsertAtFrontNode();
	void InsertAfterNode();
	void DeleteFrontNode();
	void DeleteGivenNode();
	void Display();
};

void linkedlist::InsertAtFrontNode()
{
	int data;
	node *temp = new node;
	if(temp==NULL)
	{
		cout<<"Overflow of Memory, Exiting the program";
		exit(0);
	}
	cout<<"\nEnter the data to be Inserted:";
	cin>>data;
	temp->info = data;
	temp->link = NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->link=start;
		start=temp;
	}
}

void linkedlist::InsertAfterNode()
{
	node *temp=new node, *searchnode,*insertloc;
	int data,searchdata;
	if(temp==NULL)
	{
		cout<<"Overflow of Memory, Exiting the program";
		exit(0);
	} 
	cout<<"\nEnter the data to be inserted:";
	cin>>data;
	temp->info=data;
	temp->link=NULL;
	cout<<"\nEnter the node after which new node has to be inserted:";
	cin>>searchdata;
	searchnode=start;
	insertloc = NULL;
	while(searchnode!=NULL)
	{
		if(searchnode->info==searchdata)
		{
			insertloc=searchnode;
			break;
		}
		else
			searchnode = searchnode->link;
		
	}
	if(insertloc!=NULL)
	{
		temp->link=insertloc->link;
		insertloc->link=temp;
	}
	else
	{
		cout<<"\nEnter the list is empty or search is not found\n";
		cout<<"Inserting new node at the front\n";
		temp->link=start;
		start=temp;
	}
}

void linkedlist:: DeleteFrontNode()
{
	node *temp;
	if(start != NULL)
	{
		temp=start;
		start=start->link;
		delete temp;
	}
	else
		cout<<"List is empty,nothing to delete";
}

void linkedlist :: DeleteGivenNode()
{
	int searchdata;
	node *searchnode,*previousnode,*deleteloc;
	cout<<"\nEnter the node value to be deteted:";
	cin>>searchdata;
	searchnode=start;
	previousnode=NULL;
	deleteloc=NULL;
	while(searchnode!=NULL)
	{
		if(searchnode->info==searchdata)
		{
			deleteloc=searchnode;
			break;
		}
		else
		{
			previousnode=searchnode;
			searchnode=searchnode->link;
		}
	}
	if(deleteloc!=NULL)
	{
		if(deleteloc==start)
		{
			start = start->link;
		}
		else
		{
			previousnode->link=deleteloc->link;
		}
		delete deleteloc;
	}
	else
	{
		cout<<"\nElements to be deleted does not exist.\n";
		cout<<"No action taken.\n";
	}
}

void linkedlist::Display()
{
	node *p;
	p=start;
	if(start==NULL)
	{
		cout<<"List is empty\n";
	}
	else
	{
		cout<<"\nContents of list are:";
		while (p!=NULL)
		{
			cout<<p->info;
			cout<<" ";
			p=p->link;
		}
		cout<<"\n";
		
	}
}

int main()
{
	linkedlist linklist;
	int choice;
	while(1)
	{
		cout<<"\n\n\n";
		cout<<"\n1.Insert at front of linked list";
		cout<<"\n2.Insert after given element";
		cout<<"\n3.Delete the front node of linked list";
		cout<<"\n4.Delete the given element";
		cout<<"\n5.Disaply linked list elements";
		cout<<"\n6.Exit";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch (choice)
		{
			case 1: linklist.InsertAtFrontNode();
					break;
			case 2: linklist.InsertAfterNode();
					break;
			case 3: linklist.DeleteFrontNode();
					break;
			case 4: linklist.DeleteGivenNode();
					break;
			case 5: linklist.Display();
					break;
			case 6: exit(0);
					break;		
			default: cout<<"Please enter valid number.......";
					 break;
		}
	}
}