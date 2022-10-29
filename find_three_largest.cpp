#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cout << "Enter the number of elements:";
    cin >> n;
    if(n<3)
    {
        cout << "Invalid input!";return 0;
    }
    int A[n];cout << "Enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cout << "Enter (" << n-i << " out of " << n << "):"; 
        cin >> A[i];
    }
    int first,second,third;
    first=second=third=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(A[i] >= first)
        {
            third=second;
            second=first;
            first=A[i];
        }
        else if(A[i] >= second)
        {
            third=second;
            second=A[i];
        }
        else if(A[i] >= third)
        {
            third=A[i];
        }
        
    }
        cout << "First largest = " << first << "\n";
        cout << "Second largest = " << second << "\n";
        cout << "Third largest = " << third << "\n"; 
    
    
}