#include <bits/stdc++.h> 
vector<pair<char,int>> duplicate_char(string s, int n){
    // Write your code here.
    //BRUTE FORCE APPROACH => TC=O(N logN) SC=O(N)
    // int len = s.length();
    // sort(s.begin(), s.end());
    // vector<pair<char, int>> ans;
    // for (int i = 0; i < len; i++) {
    //     int count = 1;
    //     while (i < len - 1 && s[i] == s[i + 1]) {
    //         count++;
    //         i++;
    //     }
    //     if (count > 1) {
    //         ans.push_back({s[i], count});
    //     }
    // }
    // return ans;


    //OPTIMAL APPROACH => TC=O(N) SC=O(N)
    unordered_map<char, int> count;
    for(char c : s) {
        count[c]++;
    }
    vector<pair<char, int>> ans;
    for(auto& i : count) {
        if(i.second > 1) {
            ans.push_back(i);
        }
    }
    sort(ans.begin(), ans.end());

    return ans;
}
