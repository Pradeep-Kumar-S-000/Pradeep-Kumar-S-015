#include<iostream>
using namespace std;
struct node{
    int v;
    struct node *l;
};
int main() {
    struct node *nn,*h,*t;
    h=0;
    int c=1;
    while(c==1)
    {
        nn=(struct node*) malloc(sizeof(struct node));
        cout << "Enter value:\n";
        cin >> nn->v;
        if(h==0)
        {
            h=t=nn;
        }
        else
        {
            t->l=nn;
            t=nn;
        }
        cout << "Add?...";
        cin >> c;
    }
    t=h;
    cout << "The elements of the linked list are:\n";
    while(t!=0)
    {
        cout << t->v << endl;
        t=t->l;
    }
struct node *pnode,*cnode,*nnode;
pnode=0;
cnode=nnode=h;
while(nnode!=0)
{
    nnode=nnode->l;
    cnode->l=pnode;
    pnode=cnode;
    cnode=nnode;
    
}
h=pnode;
t=h;
    cout << "The elements of the linked list are:\n";
    while(t!=0)
    {
        cout << t->v << endl;
        t=t->l;
    }
}