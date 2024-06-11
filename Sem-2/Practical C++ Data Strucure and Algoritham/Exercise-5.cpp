#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct btree
{
    struct btree *left;
    struct btree *right;
    char no;
};

void postorder(struct btree *trav);
void inorder(struct btree *trav);
void preorder(struct btree *trav);
struct btree *create(struct btree *trav);

int main()
{
    struct btree *root = NULL;
    char c;
    while(1)
    {
        root = create(root);
        cout<<"Do you want to continue(y/n):";
        cin>>c;
        if(c=='n'||c=='N')
            break;
    }
    cout<<"Inorder is:";
    inorder(root);
    cout<<"Preorder is:";
    preorder(root);
    cout<<"Postorder is:";
    postorder(root);
    return 0;

}

struct btree *create(struct btree *trav)
{
    if(trav==NULL)
    {
        trav=new btree;
        trav->right=NULL;
        trav->left=NULL;
        cout<<"Enter the node:";
        cin>>trav->no;
        return(trav);
    }
    char choice;
    cout<<"Enter the left or right child(l/r)";
    cin>>choice;
    if(choice=='r'||choice=='R')
    {
        trav->right=create(trav->right);
    }
    if(choice=='l'||choice=='L')
    {
        trav->left=create(trav->left);
    }
    return(trav);
}
void inorder(struct btree *trav)
{
    if(trav==NULL)
    return;
    inorder(trav->left);
    cout<<" "<<trav->no;
    inorder(trav->right);
}

void preorder(struct btree *trav)
{
    if(trav==NULL)
    return;
    cout<<" "<<trav->no;
    preorder(trav->left);
    preorder(trav->right);
}

void postorder(struct btree *trav)
{
    if(trav==NULL)
    return;
    postorder(trav->left);
    postorder(trav->right);
    cout<<" "<<trav->no;
}