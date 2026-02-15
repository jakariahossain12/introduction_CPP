#include<bits/stdc++.h>
using namespace std;
char mapTwn[10005][10005];
int n,m;
bool vis[10005][10005];

vector<pair<int,int>> mo = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i,int j){
    if(i<1 || i>n || j<1 || j>m)
    return false;
    return true;
}

void dfs(int i, int j){
    vis[i][j] = true;

    for (int f = 0; f < 4; f++)
    {
        int ci,cj;

        ci = i + mo[f].first;
        cj = j + mo[f].second;

        if(valid(ci,cj) && vis[ci][cj] == false  && mapTwn[ci][cj] != '#'){
            dfs(ci,cj);
            
        }
    }
    



}
int main(){
    cin>> n >> m ;
    memset(vis,false,sizeof(vis));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin>> mapTwn[i][j];
            
        }
        
    }
    
    int si,sj,ei,ej;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(mapTwn[i][j] == 'A'){
                si = i;
                sj = j;
            }
            if(mapTwn[i][j] == 'B'){
                ei = i;
                ej = j;
            }
            
        }
        
    }

   
   

    dfs(si,sj);

    if(vis[ei][ej] == true){
        cout<< "YES" ;
        
    }else{
        cout<< "NO" ;
        
    }
    



return 0;
}
