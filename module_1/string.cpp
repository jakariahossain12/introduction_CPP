#include<iostream>
using namespace std;

int main(){

    char s[1000];
    int x;
    cin>>x;
    cin.ignore();
    cout << x << endl;
     cin.getline(s,1000);
     cout << s;

    return 0;
}