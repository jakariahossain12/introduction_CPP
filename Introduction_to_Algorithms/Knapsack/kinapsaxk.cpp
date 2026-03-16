#include<bits/stdc++.h>
using namespace std;
int val[1005],weight[1005];
int dp[1005][1005];

int kin(int i,int w){

    if(i < 0 || w <= 0) return 0;

    if(dp[i][w] != -1){
        return dp[i][w];
    }

    if(weight[i] <= w){
    int opt1 = kin(i-1,w - weight[i])+val[i];
    int opt2 = kin(i-1,w);
    return dp[i][w] = max(opt1,opt2);
    }else{

        return dp[i][w] = kin(i-1,w);

    }

}

int main(){

    int n;
    cin>> n ;

    
    

    for (int i = 0; i < n; i++)
    {
        cin>> val[i] ;
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>> weight[i] ;
        
    }

     int w;
    cin>> w ;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
        
    }


   
    
    cout<< kin(n-1,w) ;
    


return 0;
}
