#include<bits/stdc++.h>
using namespace std;

map<long long int ,bool> dp;

bool reach(int c ,int n){
    if(n == c)return true;
    if(n<c) return false;

    if(dp.count(c)){
        return dp[c];
    }
    bool op1 = false,op2 = false;
    
    op1 = reach(c*2,n);
    

    
    op2 = reach(c+3,n);

    
    dp[c] = op1 || op2;
    return dp[c];
}

int main(){

int t;
cin>> t ;

while (t--)
{
    int n;
    cin>> n ;

    dp.clear();
    if(reach(1,n))
    cout<< "YES"<<endl ;
    else
    cout<<"NO"<<endl  ;
    
    
}



return 0;
}
