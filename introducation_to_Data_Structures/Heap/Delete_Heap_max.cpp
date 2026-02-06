#include<bits/stdc++.h>
using namespace std;

void insert_Heap(vector<int> &v,int val){

    if(v.empty()){
        v.push_back(val);
        return;
    }

    v.push_back(val);
    int cur_ind = v.size()-1;
    
    while (cur_ind != 0)
    {
        int par_ind = (cur_ind - 1)/2;
        if (v[cur_ind] > v[par_ind])
        swap(v[cur_ind] ,v[par_ind]);
        else
        break;
        cur_ind  = par_ind;
        
    }
    

}

void printHeap(vector<int>v){
    for(auto c:v)
    cout<< c << " " ;
    
}


void delete_Heap(vector<int> &v){
    v[0] = v.back();
    v.pop_back();
    int car_ind = 0;
    while (true)
    {
        int left_ind = car_ind * 2 +1;
    int right_ind = car_ind *2 +2;
    int left_val = INT_MIN;
    int right_val = INT_MIN;
    if(left_ind < v.size())
    left_val = v[left_ind];
    if(right_ind < v.size())
    right_val = v[right_ind];

    if(left_val > right_val && left_val > v[car_ind]){
        swap(v[left_ind],v[car_ind]);
        car_ind = left_ind;
    }else if( right_val > left_val && right_val > v[car_ind]){
        swap(v[right_ind],v[car_ind]);
        car_ind = right_ind;
    }else
     break;
    }
    
}

int main(){

int n;
cin>> n ;

vector<int>v;

for (int i = 0; i < n; i++)
{
    int c;
    cin>> c ;
    insert_Heap(v,c);
    
}

printHeap(v);
delete_Heap(v);
delete_Heap(v);

cout<< endl ;
printHeap(v);



return 0;
}
