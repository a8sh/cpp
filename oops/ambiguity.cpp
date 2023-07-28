#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void abc(){
        cout<<"A abc"<<endl;
    }
};

class B {
    public :
    void abc(){
        cout<<"B abc"<<endl;
    }
};

class C : public A, public B {

};

int main(){
    C c;
    c.A::abc();
    c.B::abc();
    return 0;
}