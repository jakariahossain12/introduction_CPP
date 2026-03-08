#include<bits/stdc++.h>
using namespace std;
int par[100005];
int s[100005];
int m,c;


int find(int node){
    if(par[node] == -1) return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dus_union(int node1,int node2){
    int leader1 = find(node1);
    int leaser2 = find(node2);

    if(leader1 == leaser2){
        return;
    }

    if(s[leader1] > s[leaser2]){
        par[leaser2] = leader1;
        s[leader1] += s[leaser2];
        m = max(m,s[leader1]);
    }else{
        par[leader1] = leaser2;
        s[leaser2] += s[leader1];
        m = max(m,s[leaser2]);
    }
    c--;
}


int main(){

    int n,e;
    cin>> n>>e ;

    c = n;
    m = 1;

    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        s[i] = 1;
    }
    
    while (e--)
    {
        int a,b;
        cin>> a>>b ;

        dus_union(a,b);
        cout<< c << " "<<m<<endl ;
        
        
    }
    

    


return 0;
}
