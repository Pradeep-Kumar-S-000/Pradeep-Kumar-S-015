#include<iostream>
#include<vector>
using namespace std;
long long ProdMaxPair(vector<int> num)
    {
        int n=num.size();
        long long res=0;
        for(int j=0;j<n;j++)
        for(int k=j+1;k<n;k++)
        {
            if(((long long)num[j]*num[k])>res)
            res=(long long)num[j]*num[k];
        }
        return res;
        
    }
int main()
{
    
    int n;
    cout << "Enter the number of numbers:\n";
    cin >> n;
    vector<int> num(n);
    cout << "Enter the numbers:\n";
    for(int i=0;i<n;i++)
    cin >> num[i];
    cout << "The product of max pairs is:" << ProdMaxPair(num) << endl;
    
}