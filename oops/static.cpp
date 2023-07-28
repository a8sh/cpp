#include<iostream>
using namespace std;
class Base{
    public:
    static int val ;
    static int func(int a){
        cout<<"Static function is called"<<endl;
        cout<<a<<endl;
    }
};
int Base::val = 24;
int main(){
    Base::func(8);
    cout<<Base::val;
    return 0;
}