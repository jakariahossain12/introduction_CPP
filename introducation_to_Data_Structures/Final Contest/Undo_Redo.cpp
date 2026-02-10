#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;

string s ="";
stack<char>st;

for (int i = 0; i < n; i++)
{
    string ss;
    cin>> ss ;
    if(ss == "TYPE"){
        char x;
        cin>> x ;
        s.push_back(x);
        while(!st.empty()){
            st.pop();
        }
        
    }else if(ss == "UNDO"){
        if(!s.empty()){
            st.push(s.back());
        s.pop_back();
        }
    }else if(ss == "REDO"){
        if(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
    }
    
}
cout<< s ;




return 0;
}
