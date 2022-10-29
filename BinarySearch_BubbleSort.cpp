/* The following problem will sort the elements of a array and makes it a sorted list 
   And then finds the position of the target element in the sorted array
*/


#include<iostream>
using namespace std;

void bsort(int *A,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int f=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j+1] < A[j])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                f=1;
            }
        }
        if(f==0)
        break;
    }
} 

void disp(int *A,int n)
{
    for(int i=0;i<n;i++)
    cout << A[i] << "\n";
}

int bs(int *A,int n,int t)
{
    int f=0,l=n-1;
    int mid;
    while(f<=l)
    {
        mid = (f+l)/2;
        
        if(A[mid]==t)
        return mid;
        else if(t > A[mid])
        {
            f=mid+1;
        }
        else if(t < A[mid])
        {
            l=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    int A[n];
    cout << "Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    cout << "The sorted array is:";
    bsort(A,n);
    disp(A,n);
    int t;
    cout << "Enter the element to be found:";
    cin >> t;
    int ind = bs(A,n,t);
    if(ind!=-1)
    {
        cout << "The target value is found in the index:" << ind <<"\n";
    }
    else
    {
        cout << "The target value is not found";
    }
}