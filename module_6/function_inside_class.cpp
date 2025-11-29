#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int mark;
    Student ( string name,int roll,int mark){
        this->name = name;
        this->roll = roll;
        this->mark = mark;

    }
    void studentDetails(){
        cout<< "Name : "<<name<< " " <<"Roll : "<<roll<< " "<<"Mark : "<<mark<<endl;
        
    }
};

int main(){

    Student jakaria("jakaria",4,234);
    jakaria.studentDetails();

     Student sumon("sumon",4,234);
    sumon.studentDetails();


return 0;
}
