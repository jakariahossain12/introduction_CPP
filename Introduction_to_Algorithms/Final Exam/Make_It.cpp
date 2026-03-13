#include<bits/stdc++.h>
using namespace std;

bool reach(int n){
    if(n ==1)return true;
    if(n<1) return false;
    if(n%2 == 0 && reach(n/2))
    return true;
    if(reach(n-3))
    return true;
    return false;
}

int main(){

int t;
cin>> t ;

while (t--)
{
    int n;
    cin>> n ;

    if(reach(n))
    cout<< "YES"<<endl ;
    else
    cout<<"NO"<<endl  ;
    
    
}



return 0;
}
