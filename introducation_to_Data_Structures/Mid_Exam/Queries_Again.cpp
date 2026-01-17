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

void insertHead (Node* &head,Node* &tail, int value){

    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prv = newNode;
    head = newNode;


}

void printL(Node* head){
    Node* temp = head;
    cout<< "L -> " ;
    
    while(temp!= NULL){
        cout<< temp->value << " " ;
        temp = temp->next;
    }
    cout<< endl ;
    
}

void printR(Node* tail){
    Node* temp = tail;
    cout<< "R -> " ;
    
    while(temp!= NULL){
        cout<< temp->value << " " ;
        temp = temp->prv;
    }
    cout<< endl ;
    
}

void insertAnyPosition(Node* &head,Node* &tail, int value,int pos){
     Node* newNode = new Node(value);
    
    if(pos == 0){
        insertHead(head,tail,value);
        printL(head);
        printR(tail);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos; i++)
    {
        if(temp == NULL){
            break;
        }
        temp = temp->next;
    }

    if(temp == NULL){
        cout<< "Invalid" << endl ;
        return;
    }

      if(temp->next == NULL){
        tail->next = newNode;
        newNode->prv = tail;
        tail = newNode;
        printL(head);
        printR(tail);
        return;
    }
    

    newNode->next = temp->next;
    newNode->prv = temp;
    temp->next->prv = newNode;
    temp->next = newNode;
    
    printL(head);
    printR(tail);

}



int main(){

    Node* head = NULL;
    Node* tail = NULL;

    
    int t ;
    cin>> t ;
    while (t--)
    {
        int v , p;
        cin>> p >> v  ;
        
    insertAnyPosition(head,tail,v,p);
    

    }
    
    





return 0;
}
