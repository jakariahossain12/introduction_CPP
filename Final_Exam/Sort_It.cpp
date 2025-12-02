#include<bits/stdc++.h>
using namespace std;

class Student
{

    public:
    string name;
    int cls;
    string sc;
    int id;
    int math;
    int english;

};

bool cmp(Student l,Student r){
    if(l.math+l.english > r.math+r.english){
        return true;
    }else if (l.math+l.english == r.math+r.english)
    {
        if(l.id<r.id){
            return true;
        }else
        {
            return false;
        }
        
    }else
    {
        return false;
    }
    
    

}


int main(){
    int n;
    cin>>n;
    Student a[n];
  
    for (int i = 0; i < n; i++)
    {
        cin>> a[i].name>>a[i].cls>>a[i].sc>>a[i].id>>a[i].math>>a[i].english ;
    }
    
    sort(a,a+n,cmp);

    for (int i = 0; i < n; i++)
    {
        cout<< a[i].name << " "<<a[i].cls<<" "<<a[i].sc<<" "<<a[i].id<<" " <<a[i].math<<" "<<a[i].english<<endl ;
    }


return 0;
}
