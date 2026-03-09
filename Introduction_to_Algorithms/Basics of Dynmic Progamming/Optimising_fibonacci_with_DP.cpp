#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll dp[1005];

ll fib(ll n){
    if(n<2) return n;

    if(dp[n] != -1)
    return dp[n];

    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}



int main(){
    
    
    ll n;
    cin>> n ;

    for (size_t i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout<< fib(n) ;
    



return 0;
}
