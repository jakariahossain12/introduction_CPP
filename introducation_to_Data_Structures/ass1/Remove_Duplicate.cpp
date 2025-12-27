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




void printNode(Node* head){
    if(head == NULL){
        return;
    }
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

    long long int v;
    int free[100003];
    

    while (true)
    {
        cin>>v ;

        if(v == -1){
            break;
        }
        if(free[v] == 0){
            free[v]++;
            insertTail(head,tail,v);
        }
    }
    
    printNode(head);




return 0;
}
