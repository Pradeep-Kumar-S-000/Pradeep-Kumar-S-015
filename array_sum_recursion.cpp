#include<iostream>
using namespace std;

int arrSum(int *A,int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (A[n-1] + arrSum(A,n-1));
    }
}

int main()
{
    int n;
    cout << "Enter the size of array:"; cin >> n;
    int A[n];
    cout << "Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    cin >> A[i];
    cout << "The sum of the elements of the array is:" << arrSum(A,n);
    }

