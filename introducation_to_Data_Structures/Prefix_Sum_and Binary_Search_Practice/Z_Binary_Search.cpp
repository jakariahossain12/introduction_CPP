#include<bits/stdc++.h>
using namespace std;

int main(){

int n,t;
cin>> n>>t ;
vector<int>a(n);
for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}

sort(a.begin(),a.end());

while (t--)
{
    int f,l,r,flag;
    cin>> f ;
    l=0;
    r=n-1;
    flag = 0;

    while (l<=r)
    {
        int   mid = (l+r)/2;
    if(a[mid] == f){
        flag=1;
        break;
    }else if (a[mid] > f)
    {
        r = mid-1;
    }else{
        l=mid+1;
    }

    }
    

 

    if(flag){
        cout<< "found"<<endl ;
        
    }else
    {
        cout<< "not found"<<endl ;
        
    }
    
    

    
}







return 0;
}
