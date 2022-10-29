// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a[7]={-1,2,4,3,2,4,3};int el;
    for(int i=0;i<6;i++)
    {int c=0;
    for(int j=0;j<6;j++)
    {
    if(a[j+1]<a[j])
    {
       int t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;
       c++;
    }
    }
    if(c==0)
    break;
    }
    cout << "The sorted array is:\n";
    for(int f=0;f<7;f++)
    cout << a[f] <<" ";
    cout << '\n';
    int ans=0;
    for(int k=0;k<7;k+=1)
    {
        ans^=a[k];
    }
    cout << ans << endl;

    return 0;
}