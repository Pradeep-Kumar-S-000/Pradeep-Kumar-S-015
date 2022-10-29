// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a[]={-1,4,7,2};
    int n=4;
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
    for(int k=i;k<=j;k++){
    cout << a[k] << " ";
    } 
    cout << endl;
    }
    }
    return 0;
}