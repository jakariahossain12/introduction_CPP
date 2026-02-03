#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int value){
        this->value = value;
        this->right = NULL;
        this->left = NULL;
    }

};

Node* createTree(){
    int n;
    queue<Node*>q;
    cin>> n ;
    Node* root = new Node(n);
    if(root);
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l,r;
        Node* l_site,*r_site;
        cin>> l >> r ;

        if(l == -1) l_site = NULL;
        else
        l_site = new Node(l);
        if(r == -1) r_site = NULL;
        else
        r_site = new Node(r);

        f->left = l_site;
        f->right = r_site;

        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);


        
    }
    

    return root;
}



void insetNodeBST(Node* root,int value){
    if(root == NULL){
        root = new Node(value);
        return;
    }

    if(root->value < value){
        if(root->right == NULL)
        root->right = new Node(value);
        else
        insetNodeBST(root->right,value);
    }else{
        if(root->left == NULL)
        root->left = new Node(value);
        else
        insetNodeBST(root->left,value);
    }
}


void printLevelOrder(Node* root){
    queue<Node*>q;
    if(root);
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


int main(){
    Node* root = createTree();

    insetNodeBST(root,10);
    insetNodeBST(root,21);
    printLevelOrder(root);



return 0;
}
