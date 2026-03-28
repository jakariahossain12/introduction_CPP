#include<bits/stdc++.h>
using namespace std;

int main(){

int n,q;
cin>> n>>q ;

vector<long long int> a(n+1);

for (int i = 1; i <= n; i++)
{
    cin>> a[i] ;
    
}

for (int i = 2; i <= n; i++)
{
    a[i] = a[i-1]+a[i];
}



while (q--)
{
    int l,r;
    cin>> l >>r ;
    if(l == 1){
        cout<< a[r]<<endl ;
    }else{
        cout<< a[r] - a[l-1]<<endl ;
        
    }
    
    
}




return 0;
}
