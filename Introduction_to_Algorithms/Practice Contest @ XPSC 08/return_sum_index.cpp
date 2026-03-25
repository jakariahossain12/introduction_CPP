#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;
int a[n];

for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}
int tag;
cin>> tag ;


int l = 0;
int sum = 0;
bool flage = false;

for (int i = 0; i < n; i++)
{
    sum+=a[i];

    while (sum> tag && l<=i)
    {
        sum-=a[l];
        l++;
        
    }
    
    if(sum == tag){
        cout<< l <<" "<<i ;
        flage =true;
        break;
    }
   
}
if(!flage){
    cout<< -1<<endl ;
    
}






return 0;
}
