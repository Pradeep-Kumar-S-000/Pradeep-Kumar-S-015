#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *front=0,*rear=0;

void enqueue(int x)
{
struct node *nn,*t;
nn = (struct node*) malloc(sizeof(struct node));
nn->data=x;
if(front == 0)
{
    front = rear = nn;
    front->next=0;
}
else
{
    rear -> next = nn;
    rear=nn;
} 
}

void dequeue()
{
    struct node *t=front;
    if(front == 0)
    {
        cout << "The queue is empty\n";
    }
    else
    {
    front=front->next;
    free(t);  
    }
}

void peek()
{
    cout << "The front element of queue is:" << front->data << endl;
}

void disp()
{
    cout << "The elements of the queue from front is:\n";
    struct node *t=front;
    while(t!=0)
    {
        cout << t->data << endl;
        t=t->next;
    }
}

int main()
{
enqueue(5);
enqueue(-1);
enqueue(7);
enqueue(9);
dequeue();
enqueue(13);
enqueue(92);
dequeue();
dequeue();
disp();
peek();
disp();
dequeue();
dequeue();
peek();
dequeue();
dequeue();
dequeue();
}