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
    cout<< endl ;
    
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


void InsertAtAnyPosition(Node* &head,Node* &tail,int value,int pos){
     
    if(head == NULL){
        cout<< "No node here" ;
        
        return;
    }
    if(pos == 0){
        InsertInHead(head,tail,value);
        return;
    }
    Node* newNode = new Node(value);

    Node* temp = head;

    for (int i = 1; i < pos; i++)
    {
        if(temp->next == NULL){
            cout<< "invalid index "<<endl ;
            return;
        }
        temp = temp->next;
    }


    if(temp->next == NULL){
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    


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

    InsertAtAnyPosition(head,tail,500,4);
    
    printNode(head);

    InsertAtAnyPosition(head,tail,900,9);

    printNode(head);



return 0;
}
