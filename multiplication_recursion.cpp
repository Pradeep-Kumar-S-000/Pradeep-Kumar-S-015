#include<iostream>
using namespace std;

int multiply(int m,int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (m + multiply(m,n-1));
    }
}

int main()
{
    int m,n;
    cout << "Enter the two numbers:";
    cin >> m >> n;
    int ans = multiply(m,n);
    cout << "The product is:" << ans;

}