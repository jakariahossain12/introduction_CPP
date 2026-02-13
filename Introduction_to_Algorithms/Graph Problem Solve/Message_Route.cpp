#include<bits/stdc++.h>
using namespace std;
vector<int> bfs_list[100005];
bool vis[100005];
int parent[100005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(auto child:bfs_list[par]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
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
    bfs_list[a].push_back(b);
    bfs_list[b].push_back(a);

}
memset(vis,false,sizeof(vis));
memset(parent,-1,sizeof(parent));
bfs(1);

vector<int>path;
int node = n;
while (node != -1)
{
    path.push_back(node);
    node = parent[node];
}

reverse(path.begin(),path.end());


if(parent[n] == -1){
    cout<< "IMPOSSIBLE" ;
    return 0;
}
cout<< path.size()<<endl ;
for(auto v:path)
cout<< v<<" " ;






return 0;
}
