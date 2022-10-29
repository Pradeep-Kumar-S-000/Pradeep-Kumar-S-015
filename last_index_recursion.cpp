#include<iostream>
using namespace std;

int lastInd(int *A,int size,int n,int t,int l)
{
    if((n == size - 1) && (A[n] == t))
    {
        return n;
    }
    else if((n == size - 1) && (A[n] != t))
    {
        return l;
    }
    else if(A[n]==t && n>l)
    {
        l=n;
        return lastInd(A,size,n+1,t,l);
    }
    else
    {
        return lastInd(A,size,n+1,t,l);
    }
}

int main()
{
    int n,t;
    cout << "Enter the size of array:"; cin >> n;
    int A[n];
    cout << "Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    cin >> A[i];
    cout << "Enter the target number:";
    cin >> t;
    cout << "The last occurence is in the index:" << lastInd(A,n,0,t,-1);
}