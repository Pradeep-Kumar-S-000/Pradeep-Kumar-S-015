#include<iostream>
#include<cmath>
using namespace std;
int B_to_D(int n)
{
    int p=0;int d=0;
    while(n!=0)
    {
        d+=(n%10)*pow(2,p++);
        n/=10;
    }
    return d;
}
int main()
{
    int n;
    cout << "Enter binary number:";
    cin >> n;
    cout << "Decimal number:" << B_to_D(n);
    
    
}