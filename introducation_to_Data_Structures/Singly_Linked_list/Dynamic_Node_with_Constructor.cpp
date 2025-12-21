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

int main(){

    Node* head = new Node(10);
    Node* a = new Node(105);
    Node* b = new Node(130);
    Node* c = new Node(210);

    head->next = a;
    a->next = b;
    b->next = c;
    

    Node* temp = head;
    

    while (temp != NULL)
    {
        cout<< temp->value << endl ;
        temp = temp->next;
        
    }
    
    cout<< endl ;
    
    
    Node* te = head;
    

    while (te != NULL)
    {
        cout<< te->value << endl ;
        te = te->next;
        
    }
    


return 0;
}
