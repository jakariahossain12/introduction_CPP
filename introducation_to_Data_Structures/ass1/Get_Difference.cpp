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



int main(){

    Node* head = NULL;
    Node* tail = NULL;

    long long int v;
    long long int mi = INT_MAX;
    long long int ma = INT_MIN;
    long long int s = 0;
    while (true)
    {
        cin>> v ;
        if(v == -1){
            break;
        }
        if (v < mi) mi = v;
        if (v > ma) ma = v;

        insertTail(head,tail,v);
        s++;
    }

    if(s >= 2){
        cout<< ma - mi ;
    }else{
        cout<< 0 ;
        
    }
    
    




return 0;
}
