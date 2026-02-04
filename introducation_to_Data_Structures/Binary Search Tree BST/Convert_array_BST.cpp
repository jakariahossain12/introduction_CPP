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

Node* convertArrayBST(int a[],int l,int r){

    if(l>r){
        return NULL;
    }

    int mid =(l+r)/2;
    Node* root = new Node(a[mid]);
    Node* le = convertArrayBST(a,l,mid-1);
    Node* ri = convertArrayBST(a,mid+1,r);
    root->left = le;
    root->right = ri;
    return root;

}


void printLevelOrder(Node* root){
    queue<Node*>q;
    if(root)
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

    int n;
    cin>> n ;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }
    sort(a,a+n);

    Node* root = convertArrayBST(a,0,n-1);

    printLevelOrder(root);
    



return 0;
}
