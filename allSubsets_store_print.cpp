#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> allSubsets(vector<int> a)
{
    int n = a.size();
    int c = pow(2,n);
    vector<vector<int>> b(c);
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i & (1<<j))!=0)
            b[i].push_back(a[j]);
        }
    }
    return b;
}
    

int main()
{
    
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cout << "Enter(" << n-i << " out of " << n << ") elements:";
        cin >> A[i];
    }
    vector<vector<int>> all=allSubsets(A);
    for(int i=0;i<all.size();i++){
    for(int j=0;j<all[i].size();j++)
    {
        cout << all[i][j] << "\t";
    }
    cout << "\n";
}
}