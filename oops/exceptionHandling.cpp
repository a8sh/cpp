#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = -1;
    try{
        cout<<"Inside try"<<endl;
        if(x<0){
            throw(x);
            cout<<"Inside Throw"<<endl;
        }
    }
    catch(float x){
        cout<<"Exception Caught"<<endl;
    }
    catch(...){
        cout<<"Inside all catch block"<<endl;
    }
    cout<<"After catch block"<<endl;
    return 0;
}