#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    return b;
    gcd(b%a,a);
}

int main()
{
    int a,b;int g,l;
    cout << "Enter two numbers:";
    cin >> a >> b;
    g = gcd(a,b);
    l=a*b/g;
    cout << "GCD=" << g << "\n";
    cout << "LCM=" << l;
}