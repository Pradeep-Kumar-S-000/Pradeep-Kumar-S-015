#include<iostream>
using namespace std;

int firstInd(int *A,int n,int t,int f)
{
    if(n==0 && A[n]!=t)
    {
        return f;
    }
    else if(n==0 && A[n]==t)
    {
        return n;
    }
    else if(A[n]==t && n<=f)
    {
        f=n;
        return firstInd(A,n-1,t,f);
    }
    else{
        return firstInd(A,n-1,t,f);
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
    cout << "The first occurence is in the index:" << firstInd(A,n-1,t,-1);
}