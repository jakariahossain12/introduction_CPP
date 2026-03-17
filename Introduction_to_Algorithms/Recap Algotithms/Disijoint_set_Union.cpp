#include<bits/stdc++.h>
using namespace std;
int par[1003];
int groupe_size[1003];

int find(int node){
    if(par[node] == -1) return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void union_groupe(int node1,int node2){

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



    union_groupe(1,2);
    union_groupe(3,4);
    union_groupe(3,5);
    union_groupe(3,2);

    
    

    for (int i = 1; i < 6; i++)
    {
        cout<< i << " -> " << par[i]<<endl ;
        
    }
    

    


return 0;
}
