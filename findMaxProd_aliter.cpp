#include<iostream>
#include<vector>
using namespace std;
vector<int> ProdMaxPair(vector<int> num)
    {
        int m1=0,m2=0;
        for(int i=0;i<num.size();i++)
        {
            if((long long)num[i]>(long long)num[m1])
            m1=i;
            
        }
        for(int j=0;j<num.size();j++)
        {
        if((long long)num[j]!=(long long)num[m1] && (long long)num[j]>(long long)num[m2])
            m2=j;
        }
        
        return {m1,m2};
        
        
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
    vector<int> a=ProdMaxPair(num);
    cout << "The product of max pairs is:" << num[a[0]]*num[a[1]] << endl;
    
}