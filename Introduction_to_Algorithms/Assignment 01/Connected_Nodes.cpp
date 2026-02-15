#include<bits/stdc++.h>
using namespace std;
vector<int> graph_list[10005];


void printNode(int x){
    sort(graph_list[x].begin(),graph_list[x].end(),greater<int>());
    if(graph_list[x].size() == 0){
        cout<< -1 ;
        return;
    }
    for(auto v : graph_list[x])
    cout<< v << " ";
}

int main(){

int n,e;
cin>> n>>e ;
while (e--)
{
   int a,b;
   cin>> a>>b ;
   graph_list[a].push_back(b);
   graph_list[b].push_back(a);
   
}

int q;
cin>> q ;

while (q--)
{
    int x;
    cin>> x ;
    printNode(x);
    cout<< endl ;
     
    
    
}





return 0;
}
