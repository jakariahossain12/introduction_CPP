#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;

while (t--)
{
    long long int n,r;
    cin>> n ;
    int a[n];
    r=0;
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
    }
    for (int i = 0; i < n; i++)
    {
        r+=ceil((double)a[i]/2);
    }
    
    cout<< r<<endl ;
}


return 0;
}
