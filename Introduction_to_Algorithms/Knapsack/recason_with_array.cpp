#include<bits/stdc++.h>
using namespace std;
vector<int>dp;

int sum(int i,vector<int> &a){
    if(i<0){
        return 0;
    }
    if(dp[i] != -1){
        return dp[i];
    }

    int l = a[i] + sum(i-2,a);
    int r = sum(i-1,a);
    return dp[i] = max(l,r);
}

int main(){

    dp.assign(1005,-1);
vector<int> a = {1,20,4,3,5};

cout<< sum(4,a) ;


return 0;
}
