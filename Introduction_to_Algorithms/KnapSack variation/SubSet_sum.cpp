#include<bits/stdc++.h>
using namespace std;
int num[1003];
int dp[1003][1003];

bool subset_sum(int n,int val){
    if(n<0){
        if(val == 0){
            return true;
        }else{
            return false;
        }
    }

    if(dp[n][val] != -1){
        return dp[n][val];

    }
    
    if(num[n] <= val){
        bool opt1 = subset_sum(n-1,val - num[n]);
        bool opt2 = subset_sum(n-1,val);
        return dp[n][val] = opt1 || opt2;
    }else{

        return dp[n][val] = subset_sum(n-1,val);
    }
}

int main(){

    int n;
    cin>> n ;
    
    for (int i = 0; i < n; i++)
    {
        cin>> num[i] ;
        
    }

    
    

    int v;
    cin>> v ;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= v; j++)
        {
            dp[i][j] = -1;
        }
        
    }

    cout<< subset_sum(n-1,v) ;
    
    


return 0;
}
