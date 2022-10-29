#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,y,ans;
    int multiply(int,int);
    cout << "Enter x,y" << endl;
    cin >> x >> y;
    
    ans = multiply(x,y);
    cout << "The product of x,y is " << ans << endl;
    return 0;
}
int multiply(int x,int y)
    {
        return x*y;
    }