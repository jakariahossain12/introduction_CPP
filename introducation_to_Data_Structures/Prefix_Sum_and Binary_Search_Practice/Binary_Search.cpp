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

int s;
cin>> s ;

int l,r,flag;
flag = 0;
l=0;
r = n-1;
while (l<=r)
{
    int mid = (l+r)/2;
    if(a[mid] == s){
        flag=1;
        break;
    }else if (a[mid] < s)
    {
        r=mid-1;
    }else
    {
        l=mid+1;
    }
    
    
}

if(flag){
    cout<< "found"<<endl ;
    
}else
{
    cout<< "Not Found"<<endl ;
    
}





return 0;
}
