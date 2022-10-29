#include<iostream>
using namespace std;
int *selsort(int l[],int n)
    {        
        for(int i=0;i<n;i++)
        {
            int minpos = i;
            for(int j=i+1;j<n;j++)
                if(l[minpos]>l[j])
                minpos = j;
                if(l[i]>l[minpos])
                {
                int t=l[i];
                l[i]=l[minpos];
                l[minpos]=t; 
                }           
        }        
        return l;
    }
 
int main()
    {
    int l[] = {9,555,670,55,36,1,4,2,56,675,52,52,52,52,73};
    int n = sizeof(l)/sizeof(l[1]);
    int *p = selsort(l,n);
    for(int k=0;k<n;k++)
        {
            cout << (p+k) << endl;
        cout << *(p+k) << "\n";
        }
    
    
    }
    
