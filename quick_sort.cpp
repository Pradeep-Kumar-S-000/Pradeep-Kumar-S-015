#include<iostream>
using namespace std;

int partition(int A[],int lb,int ub)
{
    int pivot = A[lb];
    int start = lb,end=ub;
    while(start < end)
    {
        while(A[start] <= pivot)
        start++;
        while(A[end] > pivot)
        end--;
        if(start < end)
        {
            int t = A[start];
            A[start] = A[end];
            A[end] = t;
        }
    }
        int temp = A[lb];
        A[lb] = A[end];
        A[end] = temp;
        return end;
    
}

    void quicksort(int A[],int lb,int ub)
    {
        if(lb < ub)
        {
            int loc = partition(A,lb,ub);
            quicksort(A,loc+1,ub);
            quicksort(A,lb,loc-1);
        }
    }


int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    int a[n];
    int c=n;
    for(int i=0;i<n;i++)
    {
        cout << c-- << " elements are to be filled:";
        cin >> a[i];
    }
    int lb=0,ub=n-1;
    quicksort(a,lb,ub);
    cout << "The sorted array is:\n";
    for(int i=0;i<n;i++)
    {
        cout << a[i] << endl;
    }
}