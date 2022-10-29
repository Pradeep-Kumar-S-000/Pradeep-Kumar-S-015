#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* top=0;

void push(int v)
{
    struct node *t,*nn;
    nn = (struct node*) malloc(sizeof(struct node));
    nn->data=v;
    if(top == 0)
    {
        top=t=nn;
    }
    else
    {
        top=nn;
        top->next=t;
        t=nn;
    }
    
}

void pop()
{
    struct node *t;
    t=top;
    top=t->next;
    free(t);
}

void peek()
{
    cout << "The topmost element is:";
    cout << top->data << endl;
}

void disp()
{
    struct node* temp;
    temp=top;
    cout << "The elements of the list are:\n";
    while(temp!=0)
    {
        cout << temp->data << endl;
        temp=temp->next;
    }
    
}
int main()
{
    int N,el;
   push(45);
   push(38);
   push(92);
   push(63);
   push(100);
    disp();
    
    pop();
    disp();
    peek();
}