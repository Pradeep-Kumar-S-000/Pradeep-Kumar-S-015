#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node *next;
};

void disp(node* head)
{
    node *temp;
    temp=head;
    
    while(temp!=0)
    {
        cout << temp->val << "\n";
        temp=temp->next;
    }
}

node* create(int n)
{
    node *temp,*head=0,*nn;int x;
    for(int i=0;i<n;i++)
    {
        cout << "Enter the data(" << i+1 << " out of " << n << "):";cin >> x;
        nn = new node(); nn->val=x;
        if(head==0)
        {            
            head=temp=nn;
        }
        else{
            temp->next=nn;
            temp=nn;
        }
    }
    return head;
}

node* revlist(node* h)
{
    
    node *pnode=0,*cnode,*nnode;
    cnode=nnode=h;
    while(nnode!=0)
    {
        nnode=nnode->next;
        cnode->next=pnode;
        pnode=cnode;
        cnode=nnode;
    }
    h=pnode;
    return h;

}

int main()
{
    node *h,*k;
    int n;
    cout << "Enter the number of elements to be created:";
    cin >> n;
    h=create(n);
    cout << "The elements of the linked list are:\n"; 
    disp(h);
    k=revlist(h);
    cout << "The elements of the reversed linked list are:\n";
    disp(k);


}