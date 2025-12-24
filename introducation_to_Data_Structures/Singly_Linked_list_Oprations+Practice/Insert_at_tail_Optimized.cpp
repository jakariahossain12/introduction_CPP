#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};




void printNode(Node* &head){
    Node*temp = head;
    while (temp!=NULL)
    {
        cout<< temp->value<<endl ;
        temp = temp->next;
        
    }
    
}

void InsertAtTail(Node* &head,Node* &tail,int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;



}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtTail(head,tail,30);
    InsertAtTail(head,tail,90);
    InsertAtTail(head,tail,60);


    printNode(head);






return 0;
}
