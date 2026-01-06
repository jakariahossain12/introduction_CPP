#include<bits/stdc++.h>
using namespace std;

int main(){

    // list<int>l;

    // list<int>l(10);

    // list<int>l(10,5);

    // list<int>l2(l);

    vector<int>a = {23,34,23,5,32,3};

    list<int>l2(a.begin(),a.end());



    cout<< l2.size() <<endl ;
    
    for (int v:l2)
    {
       cout<< v <<endl ;
       
    }
    



return 0;
}
