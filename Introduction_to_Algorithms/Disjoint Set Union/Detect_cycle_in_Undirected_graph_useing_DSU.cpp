#include<bits/stdc++.h>
using namespace std;
int par[1005];
int groupe_size[1005];

int find(int node){
    if(par[node] == -1) return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dus_union(int node1,int node2){

    int leader1 = find(node1);
    int leader2 = find(node2);

    if(groupe_size[leader1] > groupe_size[leader2]){

        par[leader2] = leader1;
        groupe_size[leader1] += groupe_size[leader2];
    }else{
        par[leader1] = leader2;
        groupe_size[leader2] += groupe_size[leader1];
    }
}

int main(){

    memset(par,-1,sizeof(par));
    memset(groupe_size,1,sizeof(groupe_size));

   
    int n,e;
    cin>> n>>e ;
    bool cycle = false;

    while (e--)
    {
        int a,b;
        cin>> a>>b ;

        int leader1 = find(a);
        int leader2 = find(b);


        if(leader1 == leader2) cycle =true;
        else
        dus_union(a,b);
    }
    
    
    if(cycle){
        cout<< "cycle detect" ;
        
    }else{
        cout<< "No cycle" ;
        
    }


    
    

return 0;
}
