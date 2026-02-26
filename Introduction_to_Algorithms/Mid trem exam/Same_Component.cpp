#include<bits/stdc++.h>
using namespace std;



vector<pair<int,int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
bool valid(int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m)
    return false;
    return true;
}




void bfs(int i,int j,vector<vector<char>>& mat,vector<vector<bool>> &vis){
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
        if(valid(ci,cj,mat.size(),mat[0].size()) && !vis[ci][cj] && mat[ci][cj] == '.'){
            vis[ci][cj] = true;
            q.push({ci,cj});
        }
    }
    }
    
    
}

int main(){
    int n,m;
    cin>> n  >>m ;

vector<vector<char>> mat(n,vector<char>(m));
vector<vector<bool>> vis(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>> mat[i][j] ;
            
        }
        
    }
    
    
    int s1,s2,d1,d2;
    cin>> s1>>s2 ;
    cin>> d1>>d2 ;
    
    
    if(mat[s1][s2] == '.'){
        bfs(s1,s2,mat,vis);
    }

    if(vis[d1][d2] == true){
        cout<< "YES" ;
        
    }else{
        cout<< "NO" ;
        
    }



return 0;
}
