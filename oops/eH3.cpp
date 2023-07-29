#include<bits/stdc++.h>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"Constructor is called"<<endl;
    }
    ~Test(){
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    try{
        Test t1;
        throw 10;
    }
    catch(int i){
        cout<<"Caught"<<endl;
    }

    return 0;
}