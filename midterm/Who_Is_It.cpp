#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    char name[100];
    char de;
    int mark;

};
int main(){

    int t;
    cin>> t ;

    for (int i = 0; i < t; i++)
    {
            Student s,b,c;
    cin>>s.id>>s.name>>s.de>>s.mark;
    cin>>b.id>>b.name>>b.de>>b.mark;
    cin>>c.id>>c.name>>c.de>>c.mark;

    Student topper = s;

   if(topper.mark<b.mark){
    topper = b;
   }else if (topper.mark==b.mark)
   {
    if(topper.id>b.id){
        topper=b;
    }
   }
   

   if(topper.mark<c.mark){
    topper = c;
   }else if (topper.mark==c.mark)
   {
    if(topper.id>c.id){
        topper=c;
    }
   }
   

   cout<< topper.id<<" " <<topper.name<<" "<<topper.de<<" "<<topper.mark<<endl;
   
    }
    
    
    

        
    

    
    



return 0;
}
