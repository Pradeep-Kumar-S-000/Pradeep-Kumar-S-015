#include<iostream>
using namespace std;
#define N 5
int queue[N];
int front = -1,rear = -1;

void enqueue(int x)
{
    if(rear >= N-1)
    {
        cout << "Queue is full\n";
    }
    else if(front == -1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
    cout << "Queue is empty\n";
    }
    else if(front == rear)
    {
    front = rear = -1;    
    }
    else
    {
    front++;    
    }
}

void display()
{
    if(front == -1 && rear == -1)
    {
        cout << "The queue is empty\n";
    }
    else
    {
    int i;
    cout << "The elements of the queue are\n";
    for(i=front;i<=rear;i++)
    cout << queue[i] << endl;
    }
    
}

void peek()
{
    cout << "The front element of queue is:" << queue[front] << endl;
}

int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    peek();
    dequeue();
    peek();
    display();
    
    
}


