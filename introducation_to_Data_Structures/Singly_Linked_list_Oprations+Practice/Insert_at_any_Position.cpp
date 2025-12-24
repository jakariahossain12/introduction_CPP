#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node*next;
    Node(int value){
        this->value=value;
        this->next=NULL;

    }
};

void InsertAnyPosition(Node *&head,int value ,int position){
    Node* newNode = new Node(value);
    Node*temp = head;
    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    


}




void printNode(Node*head){
    Node*temp = head;
    while (head!=NULL)
    {
        cout<< head->value<<endl ;
        head = head->next;
        
    }
    
}

int main(){

    Node*head = new Node(30);
    Node*a = new Node(60);
    Node*b = new Node(70);
    head->next=a;
    a->next=b;

    InsertAnyPosition(head,50,2);

    printNode(head);



return 0;
}
