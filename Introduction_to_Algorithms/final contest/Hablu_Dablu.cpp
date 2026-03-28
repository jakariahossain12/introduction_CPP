#include<bits/stdc++.h>
using namespace std;

int main(){

long long int n,h;
cin>> n>>h ;

priority_queue<long long int> p;
for (int i = 0; i < n; i++)
{
   long long int v;
    cin>> v ;
    p.push(v);
    
}

 long long int fire = 0;

while (true)
{
   fire++;
   while (!p.empty() && (p.top() - fire)<= 0){
    p.pop();
   }
   
   if(p.empty()){
    cout<< "Hablu" ;
    break;
   }

   long long int l = p.top() - fire;
   h-=l;
   if(h<=0){
    cout<< "Dablu" ;
    break;
   }
   
}




return 0;
}
