#include<iostream>
using namespace std;
int main()
{
    int n; bool sw;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++)
    cin >> a[i];
    int t,count=0,count_swp=0;
  
    for(int i=0;i<n-1;i++)
    {
        sw = false;
    for(int j=0;j<n-1;j++)
    {
       
        t = a[j];
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
        count_swp++;
        sw=true;
    }
    count++;
    
    }
    if(sw == false)
    break;
}
    cout << "The sorted array is \n";
    for(int k=0;k<n;k++)
    {cout << a[k];
    cout << '\n';}
    cout << "\n" << "Iterations = " << count;
    cout << "\n" << "Swaps = " << count_swp;
}