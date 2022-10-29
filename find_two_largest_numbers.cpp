#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cout << "Enter the number of elements:";
    cin >> n;
    if(n<2)
    {
        cout << "Invalid input!";return 0;
    }
    int A[n];cout << "Enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cout << "Enter (" << n-i << " out of " << n << "):"; 
        cin >> A[i];
    }
    int first,second;
    first=second=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(A[i]>first)
        {
            second = first;
            first = A[i];
        }
        else if(A[i]>second)
        {
            second = A[i];
        }
    }
    cout << "First largest = " << first << "\n";
    cout << "Second largest = " << second << "\n";

}