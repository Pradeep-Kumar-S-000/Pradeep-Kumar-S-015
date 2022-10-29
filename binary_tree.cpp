#include<iostream>
using namespace std;
struct node{
    int v;
    struct node* left;
    struct node* right;
};

struct node* create()
{
    int data;
    cout<<"Enter the data:(-1 for no data)\n";
    cin >> data;
    if(data==-1)
    return 0;
    else{
        struct node* nn;
        nn=(struct node*) malloc(sizeof(struct node));
        nn->v=data;
        cout << "Enter the left child of " << data << ": ";
        nn->left=create();
        cout << "Enter the right child of " << data << ": ";
        nn->right=create();
        return nn;
    }
    
}
int main()
{
    struct node* root=0;
    root=create();
    cout << endl << "The left child of root node is : " << (root->left)->v;
}