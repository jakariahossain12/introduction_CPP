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

int n,e;
cin>> n>>e ;

vector<edge> edge_list;
vector<long long int> dis(n+1,LLONG_MAX);

while (e--)
{
    int a,b,c;
    cin>> a>>b>>c ;
    edge_list.push_back(edge(a,b,c));
    
}

int s;
cin>> s ;
dis[s] = 0;


for (int i = 1; i < n-1; i++)
{
    for(auto ed : edge_list){
        int a,b,c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if(dis[a] != LLONG_MAX &&  dis[a] + c < dis[b]){
            dis[b] = dis[a] + c;
        }
    }
}


 for(auto ed : edge_list){
        int a,b,c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if(dis[a] != LLONG_MAX &&  dis[a] + c < dis[b]){
            cout<<"Negative Cycle Detected";
            return 0;
        }
    }




int t;
cin>> t ;

while (t--)
{
    int v;
    cin>> v ;

    if(dis[v] == LLONG_MAX){
        cout<<"Not Possible"<<endl  ;
        
    }else{
        cout<< dis[v]<<endl ;
        
    }
    
}







return 0;
}
