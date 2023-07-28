#include<bits/stdc++.h>
using namespace std;
class person {
    string name;
    int age;
    public:
    person(string name,int age){
        cout<<"Constructor is called"<<endl;
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"Name is : "<<this->name<<endl;
        cout<<"Age is : "<<this->age<<endl;
    }
};

int main(){
    person *p = new person("Akshansh",21);// this will request for the memory on the heap
    p->display();
    return 0;
}