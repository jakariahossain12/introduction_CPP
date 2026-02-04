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

Node* treeValueInsert(){
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


bool searchNode(Node* root , int value){
    if(root == NULL) return false;
    if(root->value == value) return true;

    if(root->value < value){
        return searchNode(root->right,value);
    }else{
        return searchNode(root->left,value);
    }
}

int main(){

    Node* root = treeValueInsert();

    cout<< searchNode(root,7) ;
    



return 0;
}
