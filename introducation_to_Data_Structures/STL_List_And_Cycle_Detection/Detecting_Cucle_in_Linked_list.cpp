#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next=NULL;

    }
};

void InsertAtTail(Node*&heder,Node* &tail,int value){

    Node*newNode = new Node(value);

    if(heder==NULL){
        heder = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
    

}



void printNOde(Node* heder){
    Node* temp = heder;
    while (temp!=NULL)
    {
        cout<< temp->value<<endl ;
        temp=temp->next;
        
    }
    
}


void reverseNode (Node* &head,Node* temp,Node* &tail){
    if(temp->next == NULL){
        head = temp;
        return;
    }

   
    reverseNode(head,temp->next,tail);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
    
    
}





int main(){
    Node* head = new Node(30) ;
    Node* a = new Node(40) ;
    Node* b = new Node(50) ;
    Node* c = new Node(60) ;

    head->next = a;
    a->next = b;
    b->next = c;
   

    bool isCycle = false;

    Node* fast = head;
    Node* slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            isCycle = true;
            break;
        }
        
    }
    

    if(isCycle){
        cout<< "this is a cycle" ;
    }else
    {
        cout<< "this is not a cycle" ;
        
    }
    

   





return 0;
}