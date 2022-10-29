#include<iostream>
using namespace std;

int fib(int prev,int curr,int n)
{
    if(n==0)
    return 0;
    else
    {
    int next = prev + curr;
    cout << next << " ";
    prev = curr;
    curr = next;
    return fib(prev,curr,n-1);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements of Fibonnacci series:";
    cin >> n;
    fib(0,1,n);
}