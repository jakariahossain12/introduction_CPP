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

void sumWithOutLeafNOde(vector<pair<Node*,int>>&pr){
    int val;
    int index = 0;
    cin>> val ;
    Node* root;
    if(val == -1)
    root = NULL;
    else
    root = new Node(val);
    
    queue<pair<Node*,int>>q;

    if(root)
    q.push({root,0});

    

    while (!q.empty())
    {
        pair<Node*,int> pa =  q.front();
        pr.push_back(pa);
        Node* f = pa.first;
        int level = pa.second;
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

        if(f->left){
            q.push({f->left,level+1});

        }
       
        if(f->right)
       { 
        q.push({f->right,level+1});

       }

        
    }
    

    
}

int main(){
    
    vector<pair<Node*,int>>pr;
    sumWithOutLeafNOde(pr);

    int x;
    cin>> x ;

    bool isNot = true;
    

    for (int i = 0; i < pr.size(); i++)
    {
        
        
        Node* n = pr[i].first;
        if(pr[i].second == x){
            cout<< n->val << " " ;
            isNot = false;
        }
        
    }

    if(isNot){
        cout<< "Invalid" ;
        
    }
    
    
    

    



return 0;
}