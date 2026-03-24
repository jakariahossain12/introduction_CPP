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

vector<int>b(n);
int even = 0 ;
int odd = 1;

for (int i = 0; i < n; i++)
{
    if(a[i] > 0){
        b[even] = a[i];
        even+=2;
    }else{
        b[odd] = a[i];
        odd+=2;
    }
}

for (int i = 0; i < n; i++)
{
    cout<< b[i] <<" ";
    
}




return 0;
}
