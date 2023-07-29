#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = -1;
    char z = 'a';
    try{
        cout<<"Inside try block"<<endl;
        if(x<0){
            throw x;
            cout<<"Inside throw block"<<endl;
        }
    }
    catch(float x){
        cout<<"Exception caught"<<endl;
    }
    try{
        cout<<"Inside try block"<<endl;
        if(x<0){
            throw x;
            cout<<"Inside throw block"<<endl;
        }
    }
    catch(int x){
        cout<<"Exception caught"<<endl;
    }
    catch(...){
        cout<<"Caught exeption"<<endl;
    }
    cout<<"Done execution"<<endl;
    return 0;
}