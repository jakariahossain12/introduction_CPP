#include<iostream>
#include<algorithm>
using namespace std;

int main(){


    cout << min(5,2) << endl;
    cout << max(34,2) << endl;

    cout << max({34,456,24,54,234,645})<< endl;
    cout << min({34234,535,24,5646,234,67})<< endl;

    int a = 3;
    int b = 2;

    swap(b,a);
    cout << a << " " << b;

    return 0;
}