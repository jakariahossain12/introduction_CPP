#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
for (int i = 0; i < t; i++)
{
    int n,r;
cin>> n>> r ;
int a[n];
int y = 0;
for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}

for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        for (int z = j+1; z < n; z++)
        {
            int v = a[i]+a[j]+a[z];
            if(v==r){
                y=1;
                break;
            }
        }
        
        
    }
    
}

if(y){
    cout<< "YES" <<endl;
    
}else
{
    cout<< "NO" <<endl;
    
}
}





return 0;
}
