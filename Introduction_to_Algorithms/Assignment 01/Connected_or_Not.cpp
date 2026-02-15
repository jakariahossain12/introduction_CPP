#include<bits/stdc++.h>
using namespace std;
int graph[1005][1005];

int main(){

int n,e;
cin>> n >>e ;
memset(graph,0,sizeof(graph));

while (e--)
{
   int a,b;
   cin>> a>>b ;
   
   graph[a][b] = 1;

}

int q;
cin>> q ;

while (q--)
{
    int a,b;
    cin>> a>>b ;
    if(a == b){
        cout<< "YES"<<endl ;
    }else if(graph[a][b] == 1){
        cout<< "YES"<<endl ;
        
    }else{
        cout<< "NO"<<endl ;
        
    }
    
}




return 0;
}
