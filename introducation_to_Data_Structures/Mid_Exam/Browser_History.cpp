#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    string name;
    Node* next;
    Node* prev;
    Node(string name){
        this->name = name;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertTail (Node* &head,Node* &newHead ,Node* &tail, string name){

    Node* newNode = new Node(name);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        newHead = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;


}

void printNode(Node* head){
    Node* temp = head;
    
    while(temp!= NULL){
        cout<< temp->name <<endl ;
        temp = temp->next;
    }
    cout<< endl ;
    
}

void nodeOperation(Node* &head,Node* newHead,Node* &tail,string name){
    if(head == NULL){
        cout<< "Not Available"<<endl ;
        return;
    }

    if(name == "prev"){
        if(head->prev != NULL)
        {
            cout << head->prev->name << endl;
            head = head->prev;
        }
        else cout << "Not Available" << endl;
        return;
    }

    if(name == "next"){
        if(head->next != NULL){
            cout<< head->next->name <<endl ;
            head = head->next;
        }
        else cout<< "Not Available" <<endl;
        
        return;
    }

    
    
    stringstream ss(name);

    string word;
    ss>>word;
    ss>> word;

    
    
    bool isFound = false;
    
    Node* temp = head;

    head = newHead;

    while (head != NULL)
    {
        if(head->name == word){
            isFound = true;
            break;
        }
        head = head->next;
    }
    

    if(isFound){
        cout<< head->name<<endl ;
        
    }else
    {
        cout<< "Not Available" << endl ;
        head = temp;
        
    }
    
    




}






int main(){

    Node* head = NULL;
    Node* newHead =NULL;
    Node* tail = NULL;

    
    
    while (true)
    {
        string name;
        cin>> name ;
        if(name == "end"){
            break;
        }
        insertTail(head,newHead,tail,name);
        

    }

    int t;
    cin>> t ;
    cin.ignore();

    while (t--)
    {
        string ss;
        getline(cin,ss);
        nodeOperation(head,newHead,tail,ss);
    }
    
    
    
    


    


    

    
    





return 0;
}
