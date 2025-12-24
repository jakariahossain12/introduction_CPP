#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};


void addNode(Node *&head,int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head=newNode;

}



void printNode(Node*head){

    while (head != NULL)
    {
        cout<< head->value<<endl;
        head = head->next;
        
    }
    

}

int main(){

    Node* head;
    
    


    addNode(head,50);
    addNode(head,90);
    addNode(head,80);
    printNode(head);


return 0;
}
