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
    Node* heder = NULL ;
    Node* tail = NULL;

   
    while (true)
    {
        int v;
        cin>> v ;
        if(v == -1){
            break;
        }

    InsertAtTail(heder,tail,v);
        
    }
    
    


    printNOde(heder);

    cout<< "after revers" <<endl ;

    reverseNode(heder,heder,tail);
    
     printNOde(heder);




return 0;
}