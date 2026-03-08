#include<bits/stdc++.h>
using namespace std;

int n,e;
vector<int> par;
vector<int> s;

int find(int node){
    if(par[node] == -1) return node;
    return par[node] = find(par[node]);
}

void dsu_union(int node1, int node2){

    int leader1 = find(node1);
    int leader2 = find(node2);

    

    if(s[leader1] > s[leader2]){
        par[leader2] = leader1;
        s[leader1] += s[leader2];
    }else{
        par[leader1] = leader2;
        s[leader2] += s[leader1];
    }
}

int main(){

    cin >> n ;
    int e = n-1;

    par.assign(n+1,-1);
    s.assign(n+1,1);

    while(e--)
    {
        int a,b;
        cin >> a >> b;

        if(find(a) != find(b)){
            dsu_union(a,b);
        }
    }

    vector<int> f;
    int count = 0;

    int leadn = find(1);

    for(int i=1;i<=n;i++)
    {
        
        int l = find(i);

        if(l != leadn){
            count++;
            f.push_back(l);
            dsu_union(leadn,l);
        }
    }

    cout << count << endl;

    for(auto v : f){
        cout << 1 << " " << v << endl;
    }

}