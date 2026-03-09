#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll fac(ll n){
    if(n == 1) return 1;

    ll f = fac(n-1);
    return f*n;
}


int main(){
   ll n;
   cin>> n ;
   if(n == 0){
    cout<< n ;
    
   }else{
   cout<< fac(n) ;
   }
   
   
   
    



return 0;
}
