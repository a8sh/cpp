#include<bits/stdc++.h>
using namespace std;
int main()
{
    try{
        try{
            throw 20;
        }
        catch(int n){
            cout<<"Partially handled"<<endl;
            throw -1.2;
        }
    }
    catch(int n){
        cout<<"Caught exeption"<<endl;
    }
    catch(...){
        cout<<"Caught all exeption"<<endl;
    }
    return 0;
}