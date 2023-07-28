#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void a(){
        cout<<"A"<<endl;
    }
};
class B {
    public:
    void b(){
        cout<<"B"<<endl;
    }
};
class C: public A {
    public:
    void c(){
        cout<<"C"<<endl;
    }
};

class D : public A,public B{
    public:
    void d(){
        cout<<"d"<<endl;
    }
};

int main()
{
    D d;
    d.d();
    return 0;
}