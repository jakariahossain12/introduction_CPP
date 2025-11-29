#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int jersey;
    
    Student ( string name,int jersey){
        this->name = name;
        this->jersey = jersey;
        

    }
    void studentDetails(){
        cout<< "Name : "<<name<< " "<<"Mark : "<<jersey<<endl;
        
    }
};

int main(){

    Student* jakaria = new Student("jakaria",44);
    

     Student* sumon  = new Student("sumon",45);

    //  jakaria = sumon; //! this copy not good because it copy only address when we delete sumon all data delete to heap memory

     *jakaria = *sumon; // ! his copy work because it copy one by one value mean all value

     delete sumon;

     cout<<jakaria->name <<jakaria->jersey ;
     
    



return 0;
}
