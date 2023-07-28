#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
bool isAnagram(string& s1, string& s2){
    int count[CHAR]={0};
    if(s1.length()!=s2.length()) return false;
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++){
        if(count[i]!=0) return false;
    }
    return true;
}
int main()
{
    string s1 = "bat";
    string s2="teb";
    if(isAnagram(s1,s2)){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";

 return 0;
}





/*#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2){
    if(s1.length()!=s2.length()) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return(s1==s2);
}
int main()
{
    string s1 = "bat";
    string s2="teb";
    if(isAnagram(s1,s2)){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";

 return 0;
}*/