#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "geeksforgeeks";
    int count[26] = {0};
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]>0){
            cout<<char(i+'a')<<" "<<count[i]<<endl;
        }
    }
    return 0;

    //My solution TC-O(N), SC-O(N)
    /*string str = "geeksforgeeks";
    map<char,int> mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
    */
}