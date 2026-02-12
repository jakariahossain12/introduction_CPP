#include<bits/stdc++.h>
using namespace std;
vector<int> bfs_list[1005];
bool check[1005];

void bfc(int src){

    queue<int>q;
    q.push(src);
    check[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for(auto child : bfs_list[par]){
            if(check[child] == false){
                q.push(child);
                check[child] = true;
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
memset(check,false,sizeof(check));
int s,be;
cin>> s>>be ;

bfc(s);

if(check[be]){
    cout<< "Yes" ;
    
}else{
    cout<< "No" ;
    
}



return 0;
}
