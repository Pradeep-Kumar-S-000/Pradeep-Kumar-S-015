#include<iostream>
using namespace std;
int main()
{
    char s[10];
    cin.getline(s,10);
    char h[2];
    h[0]=s[0];
    h[1]=s[1];
    int hh = atoi(h);
    if(hh == 12 && s[8]=='A')
    {
        s[0]='0';
        s[1]='0';
        for(int i=0;i<8;i++)
        cout << s[i];
    }
    else if (hh < 12 && s[8]=='P')
    {
        int hhn = hh+12;
        string hhs = to_string(hhn);
        
        s[0] = hhs[0];
        s[1] = hhs[1];
        for(int i=0;i<8;i++)
        cout << s[i];
        
    }
}