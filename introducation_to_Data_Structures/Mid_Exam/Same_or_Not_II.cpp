#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
    int value;
    Node* next;
    Node* prv;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prv = NULL;
    }
};

class queueL {
    public:
    Node* head = NULL;
    Node* tail = NULL;
    
    void push(int v){
        Node* newNode = new Node(v);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prv = tail;
        tail = newNode;
    }
    void pop(){
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        
        if(head == NULL){
            tail = NULL;
            return;
        }
        head->prv = NULL;
        

    }
    int front(){
        return head->value;
    }
    bool empty (){
        return head == NULL;
    }

};


class stackL {
    public:
    vector<int>l;

    void push(int v){
        l.push_back(v);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    bool empty (){
        return l.empty();
    }
};

int main(){


    
      int n,m;
    cin>> n >> m ;
    stackL st;
    queueL qu;

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
