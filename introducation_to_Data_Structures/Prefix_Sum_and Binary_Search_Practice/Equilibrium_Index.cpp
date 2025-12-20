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
vector<int>suff(n);
suff[n-1]=a[n-1];
for (int i = n-2; i >= 0; i--)
{
    suff[i]=suff[i+1]+a[i];
}

vector<int>pre(n);
pre[0]=a[0];
for (int i = 1; i < n; i++)
{
    pre[i]=pre[i-1]+a[i];
}





for (int i = 0; i < n; i++)
{
    if(pre[i] == suff[i]){
        cout<< i ;
        break;
    }
    
}



return 0;
}
