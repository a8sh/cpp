#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
    string name;
    int age;
    int height;
    public:
    int getAge(){ return this->age;}
    void setAge(int age){
        this->age = age;
    }
};


int main(){
    Human m;
    m.setAge(21);
    cout<<m.getAge();
    return 0;
}