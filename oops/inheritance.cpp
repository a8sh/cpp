#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
    int age;
    public:
    int height;
    string name;
    
    public:
    int getAge(){
        return age;
    }
    void setAge(int age){
        this->age = age;
    }
};

class Male : private Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleepnig"<<endl;
    }
};


int main(){
    Male m;
    m.height;
    return 0;
}