#include<bits/stdc++.h>
using namespace std;
vector<int>DFS_Tra[10005];
bool vis[10005];

void dfs(int src){
    cout<< src << " " ;
    vis[src] = true;

    for(auto child:DFS_Tra[src]){
        if(vis[child] == false){
            dfs(child);
        }
    }
    

}

int main(){

int n,e;
cin>> n>>e ;
while (e--)
{
    int a,b;
    cin>> a>>b ;

    DFS_Tra[a].push_back(b);
    DFS_Tra[b].push_back(a);
}
memset(vis,false,sizeof(vis));
dfs(0);


return 0;
}
