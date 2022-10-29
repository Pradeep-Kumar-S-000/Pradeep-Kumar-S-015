#include<iostream>
using namespace std;
int *selsort(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        int minpos = i;
        for(int j=i+1;j<n;j++)
        if(a[minpos]>a[j])
        minpos=j;
        if(a[i]>a[minpos])
        {
            int t=a[i];
            a[i]=a[minpos];
            a[minpos]=t;
        }
               
    }
    return a;
}
int main()
{
int l[] = {9,555,670,55,36,1,4,2,56,675,52,52,52,52,73};
int n = sizeof(l)/sizeof(l[0]);
int *p;
p = selsort(l,n);
for(int c=0;c<n;c++)
cout << *(p+c) << endl;

    
}