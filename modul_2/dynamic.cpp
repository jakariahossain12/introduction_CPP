#include<bits/stdc++.h>
using namespace std;

int main(){

        int x = 43;

    int* p = new int;
    *p = 33;

   delete p;

    cout<< p << endl;
    cout << &x << endl;
    cout <<*p<<endl;

return 0;
}
