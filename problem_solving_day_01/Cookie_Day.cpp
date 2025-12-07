#include<bits/stdc++.h>
using namespace std;

int main(){

int t; 
cin>> t ;
while (t--)
{
long long int n,k,c;
cin>> n>>k ;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}
c = a[0]%k;
bool is = false;
for (int i = 0; i < n; i++)
{
    if(k<=a[i]){

       long long int f = a[i]%k;
       
        c = min(c,f);

        is = true;
    }
}

if(is){
    cout<< c<<endl ;
    
}else
{
    cout<< "-1"<<endl ;
    
}

}










return 0;
}
