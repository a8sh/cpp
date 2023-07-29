#include<bits/stdc++.h>
using namespace std;
bool isRotation(string& s1, string& s2){
    if(s1.length()!=s2.length()) return false;
    return ((s1+s2).find(s2)!=string::npos);
}
int main()
{
    string s1 = "citi";
    string s2 = "tici";
    if(isRotation(s1,s2)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}