#include<iostream>


using namespace std;
int main()
{
    int n_space=0,n;
    string sen = "India, officially the Republic of India (Hindi: Bhārat Gaṇarājya),is a country in South Asia. It is the seventh-largest country by area, the second-most populous country, and the most populous democracy in the world. Bounded by the Indian Ocean on the south, the Arabian Sea on the southwest, and the Bay of Bengal on the southeast, it shares land borders with Pakistan to the west;[f] China, Nepal, and Bhutan to the north; and Bangladesh and Myanmar to the east. In the Indian Ocean, India is in the vicinity of Sri Lanka and the Maldives; its Andaman and Nicobar Islands share a maritime border with Thailand, Myanmar and Indonesia.";
    for(int i=0;i<sen.size();i++)
    {
        if(sen[i]==' ')
        n_space++;
    }
    n = n_space + 1;
    cout << n;
}