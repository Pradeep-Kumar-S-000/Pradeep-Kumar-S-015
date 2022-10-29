#include<bits/stdc++.h>
using namespace std;

void allSubsetsSum(int arr[],int n)
{
    int c = pow(2,n);

    for(int i=0;i<c;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if((i & (1<<j))!=0)
            sum += arr[j];
        }
        cout << sum << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++)
    cin >> A[i];
    allSubsetsSum(A,n);
    
}