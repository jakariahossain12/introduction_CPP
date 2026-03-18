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
    int sum = 0;
    cin>> n ;
    
    for (int i = 0; i < n; i++)
    {
        cin>> num[i] ;
        sum+=num[i];
    }

    
    



    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = -1;
        }
        
    }

    if(sum%2 == 1){
        cout<< "not" ;
        
    }else{
        if(subset_sum(n-1,sum/2)){
            cout<< "yes" ;
            
        }else{
            cout<< "no" ;
            
        }
        
    }
    
    
    


return 0;
}
