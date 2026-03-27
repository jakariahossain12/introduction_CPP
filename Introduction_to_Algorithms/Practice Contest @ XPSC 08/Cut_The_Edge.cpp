#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int>par;
set<pair<int,int>>st;
vector<int>dep;
int root;

void dsf(int node,int part){

    if(node == root || st.count({part,node})){
        dep[node] = 0;  
    }else{
        dep[node] = dep[part]+1;
    }

    for(auto child: adj[node]){
        if(child == part) continue;
        dsf(child,node);
    }
}


int main(){

int n;
cin>> n ;
adj.resize(n+1);
par.resize(n+1,-1);

for (int i = 0; i < n-1; i++)
{
    int u,v;
    cin>> u>>v ;
    adj[u].push_back(v);
    par[v] = u;
    
}


for (int i = 1; i <= n; i++)
{
    if(par[i] == -1){
        root = i;
        break;
    }
}

int q;
cin>> q ;

for (int i = 0; i < q; i++)
{
    int u,v;
    cin>> u>>v ;
    st.insert({u,v});
    
}

dep.resize(n+1);

dsf(root,-1);


for (int i = 1; i <= n; i++)
{
    cout<< 2*dep[i]<<" " ;
    
}
cout<< endl ;


return 0;
}
