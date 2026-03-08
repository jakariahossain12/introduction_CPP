#include<bits/stdc++.h>
using namespace std;
char adJ_mat[35][35];
int n;
bool vis[35][35];
int path[35][35];

vector< pair<int,int> > d;

bool valid(int i,int j){
    if(i < 0 || i>=n || j<0 || j>=n)
    return false;
    return true;
}

void bfs(int i,int j){
    queue< pair<int,int> > q;
    q.push({i,j});
    vis[i][j] = true;
    path[i][j] =0;

    while (!q.empty())
    {
        pair<int,int> f = q.front();
        q.pop();
        int par_i,par_j;
        par_i = f.first;
        par_j = f.second;

        for (int k = 0; k < 4; k++)
        {
            int ci = par_i + d[k].first;
            int cj = par_j + d[k].second;
            if(valid(ci,cj) && !vis[ci][cj] && adJ_mat[ci][cj] != 'T' ){
                q.push({ci,cj});
                vis[ci][cj] = true;
                path[ci][cj] = path[par_i][par_j] + 1;
            }
        }
        

        
    }
    

}


int main(){


    d.push_back({1,0});
    d.push_back({-1,0});
    d.push_back({0,1});
    d.push_back({0,-1});

    

    while (cin>> n )
    {
       
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>> adJ_mat[i][j] ;
            vis[i][j] = false;
            path[i][j] = -1;
        }
        
    }
    

    int s1,s2,e1,e2;

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           
            if(adJ_mat[i][j] == 'S'){
                s1 = i;
                s2 = j;

            }

            if(adJ_mat[i][j] == 'E'){
                e1 = i;
                e2 = j;
            }
            
        }

    }


    bfs(s1,s2);
    cout<< path[e1][e2]<<endl ;
    }
    
    

return 0;
}
