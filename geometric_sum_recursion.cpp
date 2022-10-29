#include<iostream>
#include<cmath>
using namespace std;

float geomSum(int n)
{
    if(n==0)
    return 1;
    else
    {
        return ((1/(pow(2,n))) + geomSum(n-1));
    }
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    float ans = geomSum(n);
    cout << "The geometric sum is:" << ans;

    
}