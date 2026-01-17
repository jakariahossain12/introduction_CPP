#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>> n >> m ;
    stack<int>st;
    queue<int>qu;

    if(n!=m){
        cout<< "NO" ;
    }else{

        for (int i = 0; i < n; i++)
        {
            int v;
            cin>> v ;
            st.push(v);
        }

        for (int i = 0; i < m; i++)
        {
            int v;
            cin>> v ;
            qu.push(v);
        }
        
        bool isSame = true;

        while(!st.empty() && !qu.empty()){
            if(st.top()!=qu.front()){
                isSame = false;
                break;
            }
            st.pop();
            qu.pop();
        }

        if(isSame){
            cout<< "YES" ;
            
        }else
        {
            cout<< "NO" ;
            
        }
        
    }

    



return 0;
}
