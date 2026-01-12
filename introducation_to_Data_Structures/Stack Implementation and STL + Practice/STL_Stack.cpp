#include<bits/stdc++.h>
using namespace std;





int main(){

    stack<int>st;

    int t = 5;
    while (t--)
    {
        int v;
        cin>> v ;
        st.push(v);
        
    }

    while (!st.empty())
    {
        cout<< st.top() <<endl ;
        st.pop();
        
    }
    
    
    
    
    



return 0;
}
