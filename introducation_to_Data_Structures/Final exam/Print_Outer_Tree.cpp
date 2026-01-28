#include<bits/stdc++.h>
using namespace std;



class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* sumWithOutLeafNOde(){
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
        cin>> l >> r ;

        Node* myl,*myr;

       

        if(l == -1)
        myl = NULL;
        else
        myl = new Node(l);

        if(r == -1){
            myr = NULL;
        }else
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

void outerLeft(Node* root){
     

    if(root->left){
        outerLeft(root->left);
    }else if (root->right)
    {
        outerLeft(root->right);
    }
    
    cout<< root->val << " " ;
    

}

void outerRight(Node* root){
    
    
    cout<< root->val << " " ;
    if(root->right){
        outerRight(root->right);
    }else if (root->left)
    {
        outerRight(root->left);
    }
    
   
    

}



int main(){
    Node* root = sumWithOutLeafNOde();

    if(root->left && root->right){
    outerLeft(root);
    outerRight(root->right);
    }else if(root->left){
        outerLeft(root);
    }else if(root->right){
        outerRight(root);
    }
    



    



return 0;
}
