#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;
while (t--)
{
    int n;
    cin>> n ;
    string s;
    cin>> s ;
    int count1 = 0;
    for (auto c:s)
    {
        if(c == '1'){
            count1++;
        }
    }

    int anw = 0;
     for (auto c:s)
    {
        if(c == '1'){
            anw+= count1-1;
        }else
        {
            anw+= count1+1;
        }
        
    }

    cout<< anw<<endl ;
    
    
    
    
}



return 0;
}
