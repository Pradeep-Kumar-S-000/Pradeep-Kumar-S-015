#include <iostream>
using namespace std;
int reverse(int n)
{
    int r=0;
    while(n!=0)
    {
        r=(r*10)+(n%10);
        n/=10;
    }
    return r;
}

int main() {
   int n;
   cout << "Enter the number:";
   cin >> n;
   if(reverse(n)==n)
   {
       cout << "PALINDROME!";
   }
   else
   {
       cout << "NOT A PALINDROME!";
   }
   return 0;
}