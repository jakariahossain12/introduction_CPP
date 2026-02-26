#include<bits/stdc++.h>
using namespace std;



vector<pair<int,int>> d = {{-1,-2},{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2}};
bool valid(int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m)
    return false;
    return true;
}




void bfs(int i,int j,vector<vector<char>>& mat,vector<vector<bool>> &vis,vector<vector<int>> &dis){
    queue<pair<int,int>> q;
    q.push({i,j});
    vis[i][j] = true;
    dis[i][j] = 0;
    while (!q.empty())
    {
        pair<int,int> pa = q.front();
        q.pop();


         for(auto p:d){
        int ci = pa.first+p.first;
        int cj = pa.second+p.second;
        if(valid(ci,cj,mat.size(),mat[0].size()) && !vis[ci][cj]){
            vis[ci][cj] = true;
            q.push({ci,cj});
            dis[ci][cj] = dis[pa.first][pa.second]+1;
        }
    }
    }
    
    
}

int main(){

    int t;
    cin>> t ;
    while (t--)
    {
    int n,m;
    cin>> n >>m ;
    vector<vector<char>> mat(n,vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<int>> dis(n, vector<int>(m, -1));
    int ci,cj,di,dj;
    cin>> ci>>cj ;
    cin>> di>>dj ;

    bfs(ci,cj,mat,vis,dis);

    cout<< dis[di][dj]<<endl ;
    
    

    }
    
    




return 0;
}
