#include<iostream>
using namespace std;
#include<climits>
int main()
{
    int n=4;
    int a[n]={-1,4,7,2};
    int maxSum=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int currSum=0;
            for(int k=i;k<=j;k++)
            {
                currSum+=a[k];
                
            }
            maxSum=max(currSum,maxSum);
        }
    }
    cout << maxSum << endl;

}