#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void func1(){
        cout<<"Inside Function one"<<endl;
    }
};

class B : public A {
    public:
    void func2(){
        cout<<"Inside function two"<<endl;
    }
};

class C : public A {
    public:
    void func3(){
        cout<<"Inside Function three"<<endl;
    } 
};

int main()
{
    A a;
    a.func1();
    B b;
    b.func2();
    b.func1();
    C c;
    c.func3();
    c.func1();
    return 0;
}