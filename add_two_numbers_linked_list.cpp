#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node *next;
};

node *revlist(node *h)
{
    node *pnode=0,*cnode=h,*nnode=h;
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

node *addfn(node *l1,node *l2)
{
    node *head=0,*temp;
    int c=0;
    while(l1!=0 || l2!=0 || c)
    {
        int s=0;
        if(l1!=0)
        {
            s += l1->val;
            l1=l1->next;
        }
        if(l2!=0)
        {
            s += l2->val;
            l2=l2->next;
        }
        s += c;
        c = s/10;
        node *nn=new node();nn->val = s%10;
        if(head==0)
        {
            head=temp=nn;
        }
        else
        {       
        temp->next=nn;
        temp=nn;
        }

    }
    
    return head;
}

void disp(node* head)
{
    node *temp;
    temp=head;
    
    while(temp!=0)
    {
        cout << temp->val;
        temp=temp->next;
    }
    cout << "\n";
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

int main()
{
    int n1,n2;node *h1,*h2,*ans,*h1r,*h2r;
    cout << "Enter the number of digits of n1:";
    cin >> n1;
    h1=create(n1);
    
    cout << "Enter the number of digits of n2:";
    cin >> n2;
    h2=create(n2);
    
    h1r=revlist(h1);
    h2r=revlist(h2);
    ans=addfn(h1r,h2r);

    cout << "The sum of the two numbers is:";
    disp(revlist(ans));
}