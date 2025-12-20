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
long long int count = 0;
for (int i = 0; i < n; i++)
{
    int f = a[i]+1;

    
         for (int j = 0 ; j < n; j++)
    {
        if(f==a[j]){
            count++;
            break;
        }
    }
   
    
    
    

    
}

cout<< count ;





return 0;
}
