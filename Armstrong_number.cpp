#include<iostream>
using namespace std;

//3 digit number:A number whose sum of the cubes of the digits gives the number.Ex:371
//4 digit number: power raised to 4. Ex:1634

int Armstrong(int n)
{
    int res=0;int t;
    while(n!=0)
    {
        t=n%10;
        res += t*t*t;
        n=n/10;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the number:";cin >> n;
    if(n == Armstrong(n))
    {
        cout << "Armstrong number!";
    }
    else
    {
        cout << "Not a Armstrong number!";
    }

}