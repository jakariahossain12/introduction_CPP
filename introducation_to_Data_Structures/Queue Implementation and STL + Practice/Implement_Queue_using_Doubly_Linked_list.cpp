#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node* pre;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }

};

class myQueue{
    public:
    Node* head =NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int v){
        sz++;
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

    void pop() {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
            return;
        }
        head->pre = NULL;
       
    }

    int front(){
        return head->value;

    }

    int back(){
        return tail->value;

    }

    int size(){
        return sz;

    }

    bool isEmpty(){
        return head == NULL;

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
