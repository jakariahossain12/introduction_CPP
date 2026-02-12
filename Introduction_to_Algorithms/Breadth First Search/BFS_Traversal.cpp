#include<bits/stdc++.h>
using namespace std;
vector<int> bfs_list [1005];
bool check[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    check[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        cout<< par<<" " ;


        for(auto child:bfs_list[par]){
            if(check[child] == false){
                q.push(child);
                check[child] = true;
            }
        }
        
    }
    

}

int main(){

int n,e;
cin>> n >> e ;


for (int i = 0; i <= e; i++)
{
    int a,b;
    cin>> a>>b ;
    bfs_list[a].push_back(b);
    bfs_list[b].push_back(a);
    
}
memset(check,false,sizeof(check));
bfs(0);



return 0;
}
