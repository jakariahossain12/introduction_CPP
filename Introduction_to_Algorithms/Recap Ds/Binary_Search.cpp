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
    
    sort(a.begin(),a.end());

    int f;
    cin>> f ;
    

    int l = 0;
    int r = n-1;
    bool flage = false;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(a[mid] == f){
            flage = true;
            break;
        }else if(a[mid] > f){
            r = mid-1;
        }else if(a[mid] < f){
            l = mid+1;
        }
    }
    
    
    if(flage){
        cout<< "found" ;
        
    }else{
        cout<< "not found" ;
        
    }
    


return 0;
}
