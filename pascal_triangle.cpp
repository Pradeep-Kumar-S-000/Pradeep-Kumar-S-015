#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:";cin >> n;
    vector<vector<int>> r(n);

    for(int i=0;i<n;i++)
    {
        r[i].resize(i+1);
        r[i][0]=r[i][i]=1;

        for(int j=1;j<i;j++)
        {
            r[i][j] = r[i-1][j-1] + r[i-1][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {cout << r[i][j] << " ";}
        cout << "\n";
    }
}