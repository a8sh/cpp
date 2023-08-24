#include<bits/stdc++.h>
using namespace std;

class Ggf{
    private:
    int private_variable;
    protected:
    int protected_variable;
    public:
    Ggf(){
        private_variable=10;
        protected_variable=99;
    }

    friend class F;
};

class F{
    public:
    void display(Ggf &t){
        cout<<"The value of private variable is "<<t.private_variable<<endl;
        cout<<"The value of protected variable is "<<t.protected_variable<<endl;
    }
};

int main()
{
    Ggf g;
    F f;
    f.display(g);
    return 0;
}