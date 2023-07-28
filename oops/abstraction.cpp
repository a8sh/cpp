#include<bits/stdc++.h>
using namespace std;
class abstraction {
    private:
    int a;
    int b;

    public:

    void set(int x, int y){
        a = x;
        b = y;
    }
    void get(){
        cout<<"a = "<<this->a<<endl<<"b = "<<b<<endl;
    }
};
int main(){
    abstraction a;
    a.set(2,3);
    a.get();
    return 0;
}