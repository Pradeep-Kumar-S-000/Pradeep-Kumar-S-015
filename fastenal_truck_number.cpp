#include<iostream>
using namespace std;

int find(int n,int TN,int *A)
{
    int sum=0;
    for(int i=0;i<n-3;i++){int c=0;
    for(int j=i;j<n;j++)
    {
        sum+=A[j]; c=c+1;
        if(sum%TN == 0 && c>=4)
        return 1;
    }
    }
    return 0;
}

int main()
{
    int n;cout << "Enter the number of boxes:";
    cin >> n;
    int TN;cout << "Enter TN:";
    cin >> TN;
    int arr[n];cout << "Enter the elements:";
    for(int i=0;i<n;i++)
    cin >> arr[i];
    
    int p=find(n,TN,arr);
    if(p)
    cout << "true";
    else
    cout << "false";
}