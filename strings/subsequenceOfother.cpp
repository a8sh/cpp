#include<bits/stdc++.h>
using namespace std;

bool isSubSeq(string s1,string s2){
    int n = s1.size();
    int m = s2.size();
    if(n<m) return false;
    int j=0;
    for(int i=0;i<n && i<m;i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
    return (j==m);
}

int main(){
    string parent = "ABCD";
    string child = "AE";
    if(isSubSeq(parent,child)){
        cout<<"True";
        return 0;
    }
    cout<<"False";
    return 0;
}