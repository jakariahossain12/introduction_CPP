#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;
while (t--)
{
    int n;

    cin>> n ;
    
   long long int courent = 0;

    for (int i = 0; i < n-2; i++)
    {
        long long int v;
        cin>> v ;
        courent+=v;
        
    }

    long long int org;
    cin>> org ;

    long long int miss = org - courent;

    if(miss < 0){
        cout<< 0<<endl ;
        
    }else{
        cout<< miss+1<<endl ;
        
    }
    
    
}



return 0;
}
