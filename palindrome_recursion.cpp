#include<iostream>
using namespace std;
bool palCheck(string p)
{
    int n = p.length();
    int s = n/2;
    if(n/2==0)
    return true;
    if(p[0]!=p[n-1])
    return false;
    else
    {
        string p1 = p.substr(1,n-2);
        return palCheck(p1);
    }
    return true;
    

}

int main()
{
    string pal;
    cout << "Enter the text:";
    cin >> pal;
    if(palCheck(pal) == 0)
    cout << "False";
    else
    cout << "True";
}