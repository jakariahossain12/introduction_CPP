#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;
vector<int>a(n);
for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}
vector<int>e(n);
e[0]=a[0];
for (int i = 1; i < n; i++)
{
    e[i]=e[i-1]+a[i];
}

for (int i = 0; i < n; i++)
{
    cout<< e[i]<<" " ;
    
}




return 0;
}
