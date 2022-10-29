// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a[50];
    int size,pos,el;
    cout << "Enter the size of array:\n";
    cin >> size;
    cout << "Enter the elements of array:\n";
    for(int i=0;i<size;i++)
    cin >> a[i];
    cout << "Enter the position of element:\n";
    cin >> pos;
    cout << "Enter the element:\n";
    cin >> el;
    
    if(pos<=0 || pos>size+1)
    {
        cout<<"Invalid position\n";
    }
    else
    {
        for(int j=size-1;j>=pos-1;j--)
        a[j+1]=a[j];
        a[pos-1]=el;
        size++;
    }
    cout<<"Array after insertion is:\n";
    for(int k=0;k<size;k++)
    cout << a[k]<< endl;
    

    return 0;
}