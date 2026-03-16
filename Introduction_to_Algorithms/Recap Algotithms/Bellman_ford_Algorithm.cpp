#include<bits/stdc++.h>
using namespace std;

class edge{
    public:
    int a,b,c;
    edge(int a,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main(){

    
    vector<edge> edges;

    int n,e;
    cin>> n>>e ;

    
    vector<int>dis(n+1,INT_MAX);
    while (e--)
    {
        int a,b,c;
        cin>> a>>b>>c ;
        edges.push_back(edge(a,b,c));
    }
    
    dis[1] = 0;

    for (int i = 1; i < n; i++)
    {
        for(auto ed:edges){
            int a,b,c;
            a = ed.a;
            b = ed.b;
            c = ed.c;

            if(dis[a] != INT_MAX && dis[a] + c < dis[b]){
                dis[b] = dis[a] + c;
            }
        }
    }
    

   
    
    bool flage = false;
    
for(auto ed:edges){
            int a,b,c;
            a = ed.a;
            b = ed.b;
            c = ed.c;

            if(dis[a] != INT_MAX && dis[a] + c < dis[b]){
                flage = true;
            }
        }

        if(flage){
            cout<< "cycle" ;
            
        }else{
            cout<< "NOt" ;
            
        }


return 0;
}
