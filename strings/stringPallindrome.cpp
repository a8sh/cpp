#include<bits/stdc++.h>
using namespace std;

void isPallin(string str){
    int n = str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]){
            cout<<"Not a pallindrome"<<endl;
            return;
        }
    }
    cout<<"Pallindrome"<<endl;
}

int main(){
    string str1 = "naman";
    string str2 = "raman";

    isPallin(str1);
    isPallin(str2);

    return 0;
}