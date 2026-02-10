#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;

vector<long long int>a(n);

for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}


long long int mx;
mx = INT_MIN;

vector<long long int>f;

if(a.size() == 2){

    for (int i = 0; i < n; i++)
    {
        if(a[i] %2 == 0){
            f.push_back(a[i]);
        }
    }

    if(f.size() == 1){
        cout<< f[0] ;
        return 0;
        
    }
    
    
    
    if(a[0] > a[1] && a[0]%2 == 0){
        cout<< a[0] ;
        return 0;
    }else if(a[0] < a[1] && a[1]%2 == 0){
        cout<< a[1] ;
        return 0;
        
    }else{
        cout<< -1 ;
        return 0;
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        long long int s = a[i]+a[j];

        if(s%2 == 0){
            mx = max(s,mx);
        }

    }
    
}
if(mx%2 == 0){
    cout<< mx ;
    
}else{
    cout<< -1 ;
    
}







return 0;
}
