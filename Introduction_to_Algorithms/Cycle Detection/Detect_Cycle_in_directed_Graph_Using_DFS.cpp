#include<bits/stdc++.h>
using namespace std;
vector<int> dfs_list[1000];
bool vis[1000];
bool path[1000];
bool flage;
void dfs(int src){
    vis[src] = true;
    path[src] = true;
    for (auto child:dfs_list[src])
    {
        if(vis[child] && path[child]){
            flage = true;
        }
        if(!vis[child]){
            dfs(child);
        }
    }
    path[src] = false;
}

int main(){

    int n,e;
    cin>> n>>e ;
    while (e--)
    {
        int a,b;
        cin>> a >> b ;
        dfs_list[a].push_back(b);
        
    }
    flage = false;
    memset(vis,false,sizeof(vis));
    memset(path,false,sizeof(path));
    dfs(0);

    if(flage){
        cout<< "yes" ;
        
    }else{
        cout<< "no" ;
        
    }
    


return 0;
}
