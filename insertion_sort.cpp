#include<iostream>
using namespace std;

void ins_sort(int *a,int n)
{
    int i,j,temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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
    ins_sort(a,n);
    cout << "The sorted array is:\n";
    for(int i=0;i<n;i++)
    {
        cout << a[i] << endl;
    }

}