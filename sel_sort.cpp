#include<iostream>
using namespace std;
void sel_sort(int *a, int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int minpos=i;
        for(int j=i+1;j<n;j++)
        {
            
            if(a[j]<a[minpos])
            minpos=j;
        }
        if(minpos!=i)
        {temp = a[i];
        a[i]=a[minpos];
        a[minpos]=temp;}
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
    sel_sort(a,n);
    cout << "The sorted array is:\n";
    for(int i=0;i<n;i++)
    {
        cout << a[i] << endl;
    }
}