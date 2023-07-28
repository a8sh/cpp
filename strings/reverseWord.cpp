#include<bits/stdc++.h>
using namespace std;
string reverse(string s){
    string ans = "";

    stack<string> st;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            st.push(ans);
            st.push(" ");
            ans="";
        }
        else {
            ans.push_back(s[i]);
        }
    }
    st.push(ans);
    ans = "";
    while(!st.empty()){
        string temp = st.top();
        st.pop();
        ans.append(temp);
    }

    return ans;
}
int main()
{
    string str = "hey fuck off";
    string ans = reverse(str);
    cout<<ans<<endl;
 return 0;
}