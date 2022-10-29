#include<iostream>
using namespace std;

bool check(int *A,int n,int t)
{
    if(n==0 && A[0]!=t)
    {
        return false;
    }
    else if((n==0 && A[n]==t) || (A[n]==t))
    {
        return true;
    }
    else
    {
        return check(A,n-1,t);
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
    if(check(A,n-1,t))
    cout << "True";
    else
    cout << "False";
}