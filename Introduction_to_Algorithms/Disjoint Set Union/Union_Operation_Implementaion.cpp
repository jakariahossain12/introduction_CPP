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

    dus_union(1,2);
    dus_union(1,5);
    dus_union(3,4);
    dus_union(5,3);


    for (int i = 0; i < 6; i++)
    {
        cout<< i << " -> " << par[i] << endl ;
        
    }
    

return 0;
}
