// Online C++ compiler to run C++ program online
#include <iostream>
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
    struct node *a;
    a=(struct node*) malloc(sizeof(struct node));
    cout << "Enter the element to add at the beginning\n";
    cin >> a->v;
    a->l=h;
    h=a;
    t=h;
    cout << "The elements of the linked list are:\n";
    while(t!=0)
    {
        cout << t->v << endl;
        t=t->l;
    }
    struct node *e;
    e=(struct node*) malloc(sizeof(struct node));
    cout << "Enter the element to add at the end\n";
    cin >> e->v;
    t=h;
    while(t->l!=0)
    {
        t=t->l;
    }
    t->l=e;
    e->l=0;
    t=h;
    cout << "The elements of the linked list are:\n";
    while(t!=0)
    {
        cout << t->v << endl;
        t=t->l;
    }
    int pos,i=1;
    cout << "Enter the position where you want to insert\n";
    cin >> pos;
    t=h;
    struct node *m,*prev;
    m = (struct node*) malloc(sizeof(struct node));
    cout << "Enter the element you want to insert\n";
    cin >> m->v;
    while(i<pos)
    {
        if(i==pos-1)
        prev=t;
        t=t->l;
        i++;
    }
    m->l=t;
    prev->l=m;
    t=h;
    cout << "The elements of the linked list are:\n";
    while(t!=0)
    {
        cout << t->v << endl;
        t=t->l;
    }
    
    
    
    

    return 0;
}