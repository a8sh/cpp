#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal {
    public:
    void specs(){
        cout<<"I am an Animal"<<endl;
    }
};

class germanSheperd : public Dog{
    public:
    void dogspecs(){ cout<<"I am a Dog"<<endl;}
};

int main()
{
    germanSheperd d;
    d.speak();
    d.specs();
    d.dogspecs();
    return 0;
}