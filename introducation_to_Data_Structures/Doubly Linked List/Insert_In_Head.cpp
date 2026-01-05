#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node* prev;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};





void printNode (Node*head){
    Node* temp = head;
    while (head!=NULL)
    {
        cout<< head->value << " " ;
        head = head->next;
        
    }
    cout<< endl ;
    
    
}

void printNodeBackWord (Node*tail){
    Node* temp = tail;
    while (tail!=NULL)
    {
        cout<< tail->value << " " ;
        tail = tail->prev;
        
    }
    
}

void InsertInHead(Node* &head,Node* &tail,int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;


}




int main(){
    Node* head = NULL;
    Node* tail = NULL;


    while (true)
    {
        int v;
        cin>> v ;
        if(v == -1){
            break;
        }
        InsertInHead(head,tail,v);
        
    }
    
   
    printNode(head);
    printNodeBackWord(tail);



return 0;
}
