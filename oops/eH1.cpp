#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = -1;
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
    cout<<"Done execution"<<endl;
    return 0;
}