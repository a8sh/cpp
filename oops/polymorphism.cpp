#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void sayHello(){
        cout<<"Hello!"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello!"<<endl;
    }
};

class B {
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<value2-value1<<endl;
    }
};

class Animal{
    public:
    void speak() {
        cout<<"Speaking"<<endl;
    }
};

class Dog {
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Dog obj;
    obj.speak();
    return 0;
}