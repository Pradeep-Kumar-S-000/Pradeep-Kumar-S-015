#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],minus=0,plus=0,zero=0;
    if (n>=1 && n<=100)
    {
        for(int i=0;i<n;i++)
        cin >> arr[i];        
    }
    for(int j=0;j<n;j++)
        {
            if(arr[j]<0)
            minus++;
            if(arr[j]==0)
            zero++;
            if(arr[j]>0)
            plus++;
        } 
    cout << plus/n << "\n";
    cout << minus/n << "\n";
    cout << zero/n << "\n";
}