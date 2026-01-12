#include<bits/stdc++.h>
using namespace std;



class myQueue{
    public:
   
    list<int>l;

    void push(int v){
        l.push_back(v);
    }

    void pop() {
        l.pop_front();
    }

    int front(){
        return l.front();

    }

    int back(){
        return l.back();

    }

    int size(){
        return l.size();

    }

    bool isEmpty(){
        return l.empty();

    }


};

int main(){

    myQueue qu;

    int t = 5;
    while (t--)
    {
        int v;
        cin>> v ;
        qu.push(v);
        
    }
    

    while (!qu.isEmpty())
    {
        cout<< qu.front() <<endl ;
        qu.pop();
        
    }
    



return 0;
}
