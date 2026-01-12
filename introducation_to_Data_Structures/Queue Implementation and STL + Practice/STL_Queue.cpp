#include<bits/stdc++.h>
using namespace std;

int main(){

queue<int>qu;


 int t = 5;
    while (t--)
    {
        int v;
        cin>> v ;
        qu.push(v);
        
    }
    

    while (!qu.empty())
    {
        cout<< qu.front() <<endl ;
        qu.pop();
        
    }

return 0;
}
