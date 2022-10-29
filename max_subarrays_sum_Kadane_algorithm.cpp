#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n=4;
    int a[n]={-1,-3,7,-1};
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++)
    {
        currSum+=a[i];
        if(currSum<0)
        currSum=0;
        maxSum=max(maxSum,currSum);
    }
    cout << maxSum << endl;
    

}