#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
 string s,c;
cin>> s>>c ;

int len = s.length();
int lenc = c.length();

for (int i = 0; i < len; i++)
{
    int m = 1;
    
    for (int j = 0; j < lenc; j++)
    {
        if(s[i+j] != c[j]){
            m = 0;
        }
    }
    
    
    if(m){
        cout<< "#" ;
        i+=lenc-1;
    }else
    {
        cout<< s[i] ;
    }
    
    
}
cout<< endl ;

    }
    


















return 0;
}
