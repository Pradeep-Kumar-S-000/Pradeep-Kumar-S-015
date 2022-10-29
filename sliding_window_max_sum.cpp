// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "No.of elements:";
    cin >> n;
    int a[n];
    cout << "Enter the elements:\n";
    for(int i=0;i<n;i++)
    cin >> a[i];
    
    int k;
    cout << "Enter window size:";
    cin >> k;
    int w_sum=0,m_sum;
    for(int i=0;i<k;i++)
    w_sum+=a[i];
    m_sum=w_sum;
    for(int i=k;i<n;i++)
    {
        w_sum += a[i]-a[i-k];
        m_sum = max(w_sum,m_sum);
    }
    cout << "Maximum window sum is:" << m_sum;

    return 0;
}