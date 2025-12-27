#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    long long int value;
    Node* next;
    Node(long long int value){
        this->value = value;
        this->next = NULL;
    }
};

void insertTail(Node* &head,Node* &tail,long long int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;

}

void insertHead(Node* &head,Node* &tail,long long int value){
    Node* newNode = new Node(value);
     if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void deleteHead (Node* &head,Node* &tail){
     if(head == NULL){
        return;
    }
    Node* deleteNode = head;
    head = deleteNode->next;
    if (head == NULL) tail = NULL;
    delete deleteNode;
}

void deleteNode(Node* &head,Node* &tail,long long int pos){
    if(head == NULL){
        return;
    }
    if(pos == 0){
        deleteHead(head,tail);
        return;
    }
    Node* temp = head;
    for (int i = 1; i < pos; i++)
    {
        if(temp->next == NULL){
            break;
        }
        temp = temp->next;
    }

    if(temp->next == NULL){
        return;
    }


     if(temp->next->next == NULL){
        tail = temp;
    }


    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    
    delete deleteNode;

}
 


void printNode(Node* head){
    
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp->value << " " ;
        temp = temp->next;
    }

    cout<< endl ;
}


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    long long int q,x,v;
    cin>> q ;
    

    while (q--)
    {
        cin>> x >> v ;

        if(x == 0){
            insertHead(head,tail,v);
            printNode(head);
        }else if (x == 1)
        {
            insertTail(head,tail,v);
            printNode(head);
        }else if (x==2)
        {
            deleteNode(head,tail,v);
            printNode(head);
        }
        
        
        
    }
    




return 0;
}
