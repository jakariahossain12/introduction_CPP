#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inputBinary(){
    Node* root;
    int val ;
    cin>> val ;
    if(val == -1) root = NULL;
    else
    root = new Node(val);
    queue<Node*>q;
    if(root)
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        int l,r;
        Node* ml,*mr;
        cin>> l>>r ;
        if(l == -1) ml =NULL;
        else
        ml = new Node(l);
        if(r == -1) mr =NULL;
        else
        mr = new Node(r);

        f->left = ml;
        f->right = mr;

        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);

        
    }
    
    return root;
    
}


void level_order(Node* root){
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        cout<< f->value << " " ;
        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);
        
    }
    
}

int countLeafNode(Node* root){
    if(root == NULL){
        return 0;
    }

    if(root->left == NULL && root->right==NULL){
        return 1;
    }

    int l = countLeafNode(root->left);
    int r = countLeafNode(root->right);
    return l+r;
}


int main(){

    Node* root = inputBinary();

    cout<< countLeafNode(root) ;
    



return 0;
}
