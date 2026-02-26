#include<bits/stdc++.h>
using namespace std;

int n,m;

vector<pair<int,int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
bool valid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m)
    return false;
    return true;
}




void bfs(int i,int j,vector<vector<char>>& mat,vector<vector<bool>> &vis,vector<vector<pair<int,int>>> &path){
    queue<pair<int,int>> q;
    q.push({i,j});
    vis[i][j] = true;
    
    while (!q.empty())
    {
        pair<int,int> pa = q.front();
        q.pop();


         for(auto p:d){
        int ci = pa.first+p.first;
        int cj = pa.second+p.second;
        if(valid(ci,cj) && !vis[ci][cj] &&
          (mat[ci][cj]=='.' || mat[ci][cj]=='D' || mat[ci][cj]=='R')){
            vis[ci][cj] = true;
            q.push({ci,cj});
            path[ci][cj] = {pa.first,pa.second};
            
        }
    }
    }
    
    
}

int main(){

    
    
    cin>> n >>m ;
    vector<vector<char>> mat(n,vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    
    vector<vector<pair<int,int>>> path(n, vector<pair<int,int>>(m, {-1,-1}));


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>> mat[i][j] ;
        }
        
    }
    




    int ci,cj,di,dj;

      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] == 'D'){
                ci = i;
                cj = j;
            }
            if(mat[i][j] == 'R'){
                di = i;
                dj = j;
            }
        }
        
    }
    

    bfs(ci,cj,mat,vis,path);

    
    
    

    pair<int,int> node = {di,dj};
    while (node != make_pair(-1,-1))
    {
        int x  = node.first;
        int  y = node.second;
        if(mat[x][y] == '.'){
            mat[x][y] = 'X';
        }

        node = path[x][y];
        
    }
    
    
    
 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< mat[i][j] ;
            
        }
        cout<< endl ;
        
    }



return 0;
}
