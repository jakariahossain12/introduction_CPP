#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n, m;
vector<vector<pair<ll,ll>>> adj_list; 
vector<long long> dis;
vector<ll> parent;



void dijkstra(ll src){
     priority_queue<pair<long long,ll>, vector<pair<long long,ll>>, greater<pair<long long,ll>>> pq;
    pq.push({0,src});
    dis[src] = 0;
    
    
    while (!pq.empty())
    {
        pair<ll,ll> p = pq.top();
        pq.pop();
        ll par_dis = p.first;
        ll par_Node = p.second;

        

        for(auto child : adj_list[par_Node]){
            ll child_node = child.first;
            ll child_dis = child.second;
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
        ll a,b,c;
        cin>> a>>b>>c ;

        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
        
    }
    
    for (ll i = 0; i < n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    
    dijkstra(1);


     if (dis[n] == LLONG_MAX) {
        cout << -1 << "\n"; 
        return 0;
    }


    

     vector<ll> path;
    // for (ll v = n; v != -1; v = parent[v]) {
    //     path.push_back(v);
    // }

    ll node = n;

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