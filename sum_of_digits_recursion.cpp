#include<iostream>
using namespace std;

int SOD(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return ((n%10)+SOD(n/10));
    }
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "The sum of the digits is:" << SOD(n);

}