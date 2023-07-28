#include<bits/stdc++.h>
using namespace std;
vector<int> patSearch(string& txt, string& pat){
    int n = txt.length();
    int m = pat.length();
    vector<int> ans;
    for(int i=0;i<=n-m;){
        int j;
        for(j=0;i<m;j++){
            if(pat[j]!=txt[i+j]) break;
        }
        if(j==m){
            ans.push_back(i);
        }
        if(j==0){
            i++;
        }
        else {
            i=i+j;
        }
    }
    return ans;
}
int main()
{
    vector<int> ans;
    string str = "geeksforgeeks";
    string str1 = "eeks";
    ans = patSearch(str,str1);
    for(auto x : ans){
        cout<<x<<" ";
    }

 return 0;
}