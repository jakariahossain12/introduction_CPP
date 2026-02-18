#include<bits/stdc++.h>
using namespace std;

vector<int> dfs_list[1000];
bool vis[1000];
int parent[1000];
bool flage;
void dfs(int src){
    vis[src] = true;

    for(auto child:dfs_list[src]){
        if(vis[child] && parent[src] != child){
            flage = true;
        }

       if(!vis[child]){
        
        parent[child] = src;
         dfs(child);
       }
    }

}

int main(){

    int n,e;
    cin>> n >> e ;
    flage = false;
    while (e--)
    {
       int a,b;
       cin>> a >> b ;
       dfs_list[a].push_back(b);
       dfs_list[b].push_back(a);
       
    }

    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    dfs(0);
    
    if(flage){
        cout<< "yes" ;
        
    }else{
        cout<< "No" ;
        
    }
    


return 0;
}
