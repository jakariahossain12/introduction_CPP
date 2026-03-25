#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;

while (t--)
{
    int n,k;
    cin>> n>>k ;

    string a,b;
    cin>> a ;
    cin>> b ;

    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i]){
            c++;
        }
        
    }
    
    if(k>=c){
        cout<< "YES"<<endl ;
        
    }else{
        cout<< "NO"<<endl ;
        
    }
    

    
}



return 0;
}
