#include<bits/stdc++.h>
using namespace std;

int main(){

long long int n;
cin>> n ;
long long a[n];
int isD = 0;
for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
}

sort(a,a+n);

for (int i = 0; i < n; i++)
{
    if(a[i] == a[i+1]){
        isD = 1;
        break;
    }
    
}

if(isD){
    cout<< "YES" ;
    
}else
{
    cout<< "NO" ;
}



return 0;
}
