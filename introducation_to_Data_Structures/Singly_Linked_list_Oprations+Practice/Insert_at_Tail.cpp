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

void InsertAtTail(Node*&heder,int value){

    Node*newNode = new Node(value);

    if(heder==NULL){
        heder = newNode;
        return;
    }
 Node* temp = heder;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    

}



void printNOde(Node*heder){
    Node* temp = heder;
    while (temp!=NULL)
    {
        cout<< temp->value<<endl ;
        temp=temp->next;
        
    }
    
}

int main(){
    Node* heder = NULL ;

    InsertAtTail(heder,40);
    
    InsertAtTail(heder,60);
    InsertAtTail(heder,90);
    InsertAtTail(heder,50);
   
    
    


    printNOde(heder);




return 0;
}
