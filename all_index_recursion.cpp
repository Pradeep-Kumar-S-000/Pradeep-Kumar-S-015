#include<iostream>
#include<vector>
using namespace std;

vector<int> p;

int allInd(int *A,int n,int i,int x)
{
    if(i>=n)
    {
        return 0;
    }
    if(A[i]==x)
    {
        p.push_back(i);
        allInd(A,n,i+1,x);
    }
    else
    {
        allInd(A,n,i+1,x);
    }
}

int main()
{
    int n,x;
    cout << "Enter the size of array:"; cin >> n;
    int A[n];
    cout << "Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    cin >> A[i];
    cout << "Enter the target number:";
    cin >> x;
    cout << "All the indexes are:";
    allInd(A,n,0,x);
    vector<int>::iterator j;
    for(auto j=p.begin();j<=p.end()-1;j++)
    cout << *j << " ";  
}