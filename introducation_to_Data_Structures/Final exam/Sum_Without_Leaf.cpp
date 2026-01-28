#include<bits/stdc++.h>
using namespace std;

int sum;

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

void sumWithOutLeafNOde(){
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

        sum = sum+ f->val;

        int l,r;
        cin>> l >> r ;

        Node* myl,*myr;

        if(l == -1 && r == -1){
            sum-=f->val;
        }

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
    

    
}

int main(){
    sum = 0;
    sumWithOutLeafNOde();
    cout<< sum ;
    



return 0;
}
