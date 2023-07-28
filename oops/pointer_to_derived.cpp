#include<iostream>
using namespace std;

class baseClass {
    public:
    int var_base;
    void display(){
        cout<<"Base class variable is : "<<var_base<<endl;
    }
};

class derivedClass : public baseClass {
    public:
    int var_derived;
    void display(){
        cout<<"Derived class variable is : "<<var_derived<<endl;
    }
};
int main()
{
    baseClass *base_pointer;
    baseClass base_obj;
    derivedClass derived_obj;
    // base_pointer = &derived_obj;
    base_pointer->var_base = 34;
    base_pointer->display();
    // base
}