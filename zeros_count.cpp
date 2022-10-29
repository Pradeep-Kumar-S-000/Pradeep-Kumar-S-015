#include<iostream>
using namespace std;

int zeros(int n,int c)
{
    if(n == 0)
    {
        return c;
    }
    else{
    if(n%10 == 0)
    {
        c+=1;
        return zeros((n/10),c);  
    }   
    else
    {
        return zeros((n/10),c);     
    }  
    }
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int ans = zeros(n,0);
    cout << "The number of zeros in the number is:" << ans << endl;
}