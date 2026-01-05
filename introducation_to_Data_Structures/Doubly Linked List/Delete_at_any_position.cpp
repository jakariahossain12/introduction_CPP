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

void InsertInTail(Node* &head,Node* &tail,int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;


}


void DeleteAtAnyPosition(Node* &head,Node* &tail,int pos){
    if(head == NULL){
        cout<< "no node here" ;
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
            cout<< "invalid index" ;
            return;
            
        }

    
    if(temp->next->next == NULL){
         Node* tdeleteNode = temp->next;
        temp->next = NULL;
        tail = temp;
        delete tdeleteNode;
        return;

    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;

    


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
        InsertInTail(head,tail,v);
        
    }
    
   
    printNode(head);
    printNodeBackWord(tail);

    cout<< "after delete "<<endl ;
    

    
    
    DeleteAtAnyPosition(head,tail,3);


    printNode(head);
    printNodeBackWord(tail);



return 0;
}
