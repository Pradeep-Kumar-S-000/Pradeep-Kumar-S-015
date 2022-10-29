#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void rotate(string &a)
    {
        
        reverse(a.begin(),a.begin()+2);
        reverse(a.begin()+2,a.end());
        reverse(a.begin(),a.end());
       
    }
int main()
{
    string a="GeeksforGeeks";
    rotate(a);
    cout << a;
}
  