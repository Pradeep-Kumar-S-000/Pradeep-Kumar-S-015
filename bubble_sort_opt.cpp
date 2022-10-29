#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    int i,j,temp,flag;
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j+1] < a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag=1;
            }
        }
        if(flag == 0)
            break;
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    int a[n];
    cout << "Enter the elements:\n";
    int c=n;
    for(int i=0;i<n;i++)
    {
        cout << c-- << " elements are to be filled\n";
        cin >> a[i];        
    }
     
    bubble_sort(a,n);
    cout << "The sorted array is:\n";
    for(int j=0;j<n;j++)
    {
        cout << a[j] << endl;
    }

}