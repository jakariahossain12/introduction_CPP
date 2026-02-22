#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> adj_list[1000];
int dis[1000];

int main(){

    int n,e;
    cin>> n>>e ;
    

    while (e--)
    {
        int a,b,c;
        cin>> a>> b>>c ;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
        
    }
    

    // for (int i = 0; i < n; i++)
    // {
    //     cout<< i << " -> " ;
        
    //     for (auto p:adj_list[i])
    //     {
    //         cout<< p.first << "," <<p.second << " || " ;
            
    //     }
    //     cout<< endl ;
        
    // }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        cout<< i << " -> "<<dis[i] ;
        
    }
    


return 0;
}
