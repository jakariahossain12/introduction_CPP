#include<bits/stdc++.h>
using namespace std;
vector<int> bfs_list [1005];
bool vis[1005];
int level[1005];


void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for(auto child : bfs_list[par]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par]+1;
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
memset(level,-1,sizeof(level));

int s,d;
cin>> s>>d ;


bfs(s);

cout<< level[d] ;


// for (int i = 0; i < n; i++)
// {
//     cout<< i << "->"<<level[i]<<endl ;
    
// }



return 0;
}
