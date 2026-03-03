#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<pair<int,int>>> adj_list; 
vector<long long> dis;
vector<int> parent;



void dijkstra(int src){
     priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
    pq.push({0,src});
    dis[src] = 0;
    
    
    while (!pq.empty())
    {
        pair<int,int> p = pq.top();
        pq.pop();
        int par_dis = p.first;
        int par_Node = p.second;

        

        for(auto child : adj_list[par_Node]){
            int child_node = child.first;
            int child_dis = child.second;
            if(par_dis+child_dis < dis[child_node]){
                dis[child_node] = par_dis+child_dis;
                parent[child_node] = par_Node;
                pq.push({dis[child_node],child_node});
            }
        }
    }
    
}

int main(){
    cin>> n>>m ;

    
    adj_list.assign(n+1, {});
    dis.assign(n+1, LLONG_MAX);
    parent.assign(n+1, -1);


    while (m--)
    {
        int a,b,c;
        cin>> a>>b>>c ;

        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
        
    }
    
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    
    dijkstra(1);


     if (dis[n] == LLONG_MAX) {
        cout << -1 << "\n"; 
        return 0;
    }


    

     vector<int> path;
    // for (int v = n; v != -1; v = parent[v]) {
    //     path.push_back(v);
    // }

    int node = n;

    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    

    // for(auto v:parent){
    //     if(v != -1){
    //         path.push_back(v);
    //     }
    // }

   
    reverse(path.begin(), path.end());

  
    for(auto v : path){
        if(v != 0){
            cout<< v << " " ;
            
        }
        
    }


return 0;
}
