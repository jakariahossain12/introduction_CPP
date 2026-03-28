#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;

while (n--)
{
   string s;
   cin>> s ;

   queue<char>q;

   for(auto c:s){
    if(c >= 'a' && c<= 'z'){
        q.push(c);
    }else{

        int l = c -'0';
        for (int i = 0; i < l; i++)
        {
            cout<< q.front() ;
            
        }
        q.pop();
    }

   }

   cout<< endl ;
   

   
}



return 0;
}
