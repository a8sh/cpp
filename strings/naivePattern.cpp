#include<bits/stdc++.h>
using namespace std;

vector<int> patternSearching(string &txt, string &pat) {
    int n = txt.length();
    int m = pat.length();
    vector<int> ans;
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (pat[j] != txt[j + i]) break;
        }
        if (j == m) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    string txt = "geeksforgeeks";
    string pat = "eeks";
    vector<int> ans = patternSearching(txt, pat);
    for (auto x : ans) {
        cout << x << endl;
    }
    return 0;
}
