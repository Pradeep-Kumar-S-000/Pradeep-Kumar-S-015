#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year:";
    cin >> year;
    if((year%400)==0)
    cout << year << " is LEAP YEAR!";
    else if((year%100)==0)
    cout << year << " is NOT A LEAP YEAR!";
    else if((year%4)==0)
    cout << year << " is LEAP YEAR!";
    else
    cout << year << " is NOT A LEAP YEAR!";
    
}