#include<bits/stdc++.h>
using namespace std;

class stackL {
    public:
    list<int>l;
    void push(int v){
        l.push_back(v);
    }
    void pop(){
        l.pop_back();
    }
    int size(){
        return l.size();
    }
    int top(){
        return l.back();
    }
    bool isempty(){
        return l.empty();
    }
};

void reversPrint(stackL st){
    if(st.isempty()){
        return;
    }

    int x = st.top();
    st.pop();
    reversPrint(st);
    cout<< x <<endl ;
    
}

int main(){

    stackL st;
    int t = 5;

    while (t--)
    {
        int a;
        cin>> a ;
        st.push(a);
    }
    

    // while (!st.isempty())
    // {
    //     cout<< st.top() <<endl ;
    //     st.pop();
        
    // }
    reversPrint(st);
    
    
    



return 0;
}
