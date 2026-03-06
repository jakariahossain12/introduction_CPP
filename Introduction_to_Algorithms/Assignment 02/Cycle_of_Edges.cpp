#include<bits/stdc++.h>
using namespace std;

int find(int node,vector<int> &par ){
    if(par[node] == -1) return node;
    int leader = find(par[node],par);
    par[node] = leader;
    return leader;
}

void dus_union(int node1,int node2,vector<int> &groupe_size,vector<int> &par){

    int leader1 = find(node1,par);
    int leaser2 = find(node2,par);

    if(groupe_size[leader1] > groupe_size[leaser2]){
        par[leaser2] = leader1;
        groupe_size[leader1] += groupe_size[leaser2];
    }else{
        par[leader1] = leaser2;
        groupe_size[leaser2] += groupe_size[leader1];
    }

}

int main(){

    int n,e;
    cin>> n>>e ;

    vector<int> par(n+1,-1);
    vector<int> groupe_size(n+1,1);

    int count = 0;
    
    while (e--)
    {
       int a,b;
       cin>> a>>b ;

       int leader1 = find(a,par);
       int leader2 = find(b,par);
       if(leader1 == leader2){
        count++;

       }else{
        dus_union(a,b,groupe_size,par);
       }
       
    }
    
    cout<< count ;
    


return 0;
}
