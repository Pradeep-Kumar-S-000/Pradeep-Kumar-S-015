#include<iostream>
using namespace std;

int powfn(int n,int e)
{
    if(e==0)
    {
        return 1;
    }
    else
    {
        return n*powfn(n,e-1);
    }
}

int main()
{
    int b,e;
    cout << "Enter the base:"; cin >> b;
    cout << "Enter the exponent:"; cin >> e;
    cout << b << " power " << e << " is equal to " << powfn(b,e);
}