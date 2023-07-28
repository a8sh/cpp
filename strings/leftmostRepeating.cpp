#include<bits/stdc++.h>
using namespace std;
int leftMost(string str){
    map<char,int> mp;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(mp[str[i]]==1){
            return i;
        }
    }
    return -1;
}
int main()
{
    string str = "geeksforgeeks";
    int i = leftMost(str);
    cout<<str[i];
 return 0;
}