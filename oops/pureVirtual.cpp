#include<bits/stdc++.h>
using namespace std;

class A {
    protected:
    string name;
    int age;
    public:
    A(string name,int age){
        this->name = name;
        this->age = age;
    }
    virtual void  display()=0;
    
};

class p1 : public A {
    int salary;
    public:
    p1(string name,int age,int salary):A(name,age){
        this->salary = salary;
    }
    void display(){
        cout<<"Name is : "<<this->name<<endl;
        cout<<"Salary is : "<<this->salary<<endl;
        cout<<"Age is : "<<this->age<<endl;
    }
};
class p2 : public A {
    string gfName;
    public:
    p2(string name,int age,string gfName):A(name,age){
        this->gfName = gfName;
    }
    void display(){
        cout<<"Name is : "<<this->name<<endl;
        cout<<"gfName is : "<<this->gfName<<endl;
        cout<<"Age is : "<<this->age<<endl;
    }
};

int main(){
    string name = "sairaj";
    int age = 21;
    int salary = 10000;
    string gfName = "sairaj";

    p1 sairag(name,age,salary);
    // sairag.display();
    p2 rushi(name,age,gfName);
    // rushi.display();
    A *pointer[2];
    pointer[0] = &sairag;
    pointer[1] = &rushi;
    pointer[0]->display();
    pointer[1]->display();
    
}