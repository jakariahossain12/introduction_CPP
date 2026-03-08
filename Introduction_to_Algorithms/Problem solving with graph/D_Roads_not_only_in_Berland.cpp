#include<bits/stdc++.h>
using namespace std;
int par[1005];
int s[1005];



int find(int node){
    if(par[node] == -1) return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dus_union(int node1,int node2){
    int leader1 = find(node1);
    int leaser2 = find(node2);

    

    if(s[leader1] > s[leaser2]){
        par[leaser2] = leader1;
        s[leader1] += s[leaser2];
       
    }else{
        par[leader1] = leaser2;
        s[leaser2] += s[leader1];
        
    }
    
}


int main(){

    int n,e;
    cin>> n ;
    vector<pair<int,int>> r;
    vector<pair<int,int>> ad;

    e =n-1;

    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        s[i] = 1;
    }
    
    while (e--)
    {
        int a,b;
        cin>> a>>b ;

        int leader1 = find(a);
        int leader2 = find(b);

        if(leader1 == leader2){
            r.push_back({a,b});
        }else{
            dus_union(a,b);
        }
    }
    

    for (int i = 1; i <= n; i++)
    {
        int leader1 = find(1);
        int ld = find(i);
        if(leader1 != ld){
            ad.push_back({1,i});
            dus_union(1,i);
        }
    }
    
    cout<< r.size() <<endl;

    for (int i = 0; i < r.size(); i++)
    {
        cout<< r[i].first<<" " << r[i].second << " "<<ad[i].first<<" "<<ad[i].second<<endl ;
        
    }
    
    
    


return 0;
}
