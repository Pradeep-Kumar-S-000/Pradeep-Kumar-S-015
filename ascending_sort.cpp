#include<bits/stdc++.h>
using namespace std;
int *sort(int l[],int n)
{
    
    int i,j,t,v;
    
    for(i=0;i<n-1;i++)
    {
        v=0;
        for(j=0;j<n-1;j++)
        {
            if(l[j+1]<l[j])
            {
                t=l[j];
                l[j]=l[j+1];
                l[j+1]=t;
                v++;
            }
        
            
        }
        if(v==0)
            break;
    }
    
    return l;
    
}
int main()
{
    int l[] = {33,24,38,67,56,56,56,34,12,90,85,75,93,27,35,88};
    int n = sizeof(l)/sizeof(l[0]);
    
    sort(l,n);
    for(int k=0;k<n;k++)
    cout << l[k] << "\n";
    
}