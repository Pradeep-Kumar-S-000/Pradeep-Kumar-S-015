#include<iostream>
#include<string>
using namespace std;

void pirep(string &a,int n,int i)
{
    if(i > n-1)
    {

    }
    else if(i < n-1)
    {
        if(a[i]=='p' && a[i+1]=='i')
        {
            a.replace(i,2,"3.14");
            pirep(a,a.length(),i+4);
        }
        else
        {
        pirep(a,a.length(),i+1);
        }
        
    }
    
    
    
}

int main()
{
    string p;
    cout << "Enter the string:";
    cin >> p;
    cout << "The string without pi is:";
    pirep(p,p.length(),0);
    cout << p;
}