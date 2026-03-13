#include<bits/stdc++.h>
using namespace std;
vector<int>dp;
int tel(int n){
    if(n == 0)return 0;
    if(n == 1 || n == 2)return 1;
    if(n == 3) return 2;
   
    if(dp[n] != -1){
       return dp[n];
    }
     
    dp[n] = tel(n-1) + tel(n-2) + tel(n-3) + tel(n-4);
    return dp[n];
}

int main(){

int n;
cin>> n ;
dp.assign(n+1,-1);

cout<< tel(n) ;




return 0;
}
