#include<bits/stdc++.h>
using namespace std;
vector<int> bfs_list[10000];
bool vis[10000];
int parent[10000];
bool flage;

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int pre = q.front();
        q.pop();

        for(auto child : bfs_list[pre]){
            if(vis[child] && parent[pre] != child){
                flage = true;
            }
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                parent[child] = pre;
            }

        }
    }
    

}

int main(){
int n,e;
cin>> n>>e ;
flage = false;

while (e--)
{
    int a,b;
    cin>> a>>b ;
    bfs_list[a].push_back(b);
    bfs_list[b].push_back(a);
    
}
memset(vis,false,sizeof(vis));
memset(parent,-1,sizeof(parent));


bfs(0);

if(flage == true){
    cout<<" yes" ;
    
}else{
    cout<< "no" ;
    
}


return 0;
}
