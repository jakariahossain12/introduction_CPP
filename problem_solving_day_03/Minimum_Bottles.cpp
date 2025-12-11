#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;
while (t--)
{
    int n,x;
    cin>> n>>x ;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    double r = (double)sum/x;
    cout<< ceil(r) <<endl ;
    
    
    
    
}



return 0;
}
