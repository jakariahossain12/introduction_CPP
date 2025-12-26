#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next= NULL;
    }
};


void InsertAtHead(Node* &head, Node* &tail , int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = tail;
        return;
    }

    newNode->next =head;
    head = newNode;


}

void printNode(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp->value<< endl ;
        temp = temp->next;
        
    }
    
}

void InsertAtAnyPosition(Node* &head,Node* &tail,int value,int position){
    if(position < 0 ){
        cout<< "Invalid Index"<<endl ;
        
        return;
    }

    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    if(position == 0){
        InsertAtHead(head,tail,value);
        return;
    }
    Node* temp = head;

    for (int i = 1; i < position; i++)
    {
        if(temp == NULL){
            cout<< "Invalid position"<<endl ;
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    if(temp->next == NULL){
        temp->next = newNode;
        tail = newNode;

    }else{
    newNode->next = temp->next;
    temp->next = newNode;
    }

   
    
}

void DeleteAtHead(Node* &head){

    if(head == NULL){
        cout<< "NO node here" ;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;




}


void Sorting_Linked_List_Selection_Sort(Node*head){

    for (Node* i = head; i->next != NULL; i = i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if(i->value > j->value){
                swap(i->value,j->value);
            }
        }
        
    }
    

}


int main(){

    Node* head = NULL;
    Node* tail = NULL;
    
    int v;
    while (true)
    {
        cin>> v ;
        if(v == -1){
            break;
        }
        InsertAtHead(head,tail,v);
        
    }
    


    
  
    Sorting_Linked_List_Selection_Sort(head);
    printNode(head);

    




return 0;
}
