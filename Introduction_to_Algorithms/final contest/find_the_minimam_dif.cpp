#include<bits/stdc++.h>
using namespace std;

int main(){

int n,m;
cin>> n>>m;

vector<int>a(m+1);

for (int i = 0; i < m; i++)
{
    cin>> a[i] ;
    
}

sort(a.begin(),a.begin()+m);

int mn = a[n-1] - a[0];



for (int i = 1; n+i-1 < m; i++)
{
    mn = min(a[n+i-1] - a[i],mn);
}

cout<< mn ;






return 0;
}
