#include<iostream>
#include<vector>
using namespace std;

vector<int> db;

void D_to_B(int n)
{
    if(n==0)
    {

    }
    else
    {
        D_to_B(n/2);
        db.push_back(n%2);
    }
}

int main()
{
    int n;
    cout << "Enter decimal number:";
    cin >> n;
    cout << "The binary number is:";
    D_to_B(n);
    for(int i=0;i<db.size();i++)
    cout << db[i];
}