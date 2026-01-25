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


Node* input_Tree(){
    int val;
    cin>> val ;
    Node* root;
    if(val == -1)
    root = NULL;
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
        cin>> l>>r ;
        Node* myl,*myr;
        if(l == -1)
        myl=NULL;
        else
         myl = new Node(l);
         if(r == -1)
         myr = NULL;
         else
         myr = new Node(r);
        
         f->left = myl;
         f->right = myr;

         if(f->left)
         q.push(f->left);
         if(f->right)
         q.push(f->right);


    }
    
    return root;
}

void levelOrder(Node* root){

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        cout<< f->value<<" " ;
        if(f->left){
            q.push(f->left);
        }
        if(f->right)
        q.push(f->right);
        
    }
    

}

int main(){

    Node* root = input_Tree();

    levelOrder(root);



return 0;
}
