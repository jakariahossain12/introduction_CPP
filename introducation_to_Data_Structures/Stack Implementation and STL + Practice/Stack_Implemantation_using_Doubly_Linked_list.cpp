#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int vale;
    Node* pre;
    Node* next;
    Node(int v){
        this->vale = v;
        this->next = NULL;
        this->pre = NULL;
    }
};

class stackL {
    public:


    Node* head = NULL;
    Node* tail = NULL;
    int count = 0;


    void push(int v){
        count++;
        Node* newNode = new Node(v);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
    }
    void pop(){
        count--;
        Node* deleteNode = tail;
        tail = tail->pre;
        
        delete deleteNode;

        if(tail == NULL){
            head = NULL;
            return;
        }

        tail->next = NULL;
    }
    int size(){
      return count;
    }
    int top(){
        return tail->vale;
    }
    bool isempty(){
        return head == NULL ;
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
