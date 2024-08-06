class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // //BRUTE FORCE=> TC=O(N*M) N=no.of strings || M=max length of string  SC=O(1) 
        // if (strs.empty()) return "";
        // string prefix = strs[0]; //flower
        // for (int i=1; i<strs.size(); i++){
        //     int j = 0; //to iterate on remaining 2 strings
        //     while(j<strs[i].size() && prefix[j]==strs[i][j]){
        //         j++;
        //     }
        //     prefix = prefix.substr(0,j);
        //     if(prefix.empty()) return "";
        // }
        // return prefix;

        //OPTIMAL APPROACH=> TC=O(N LOG N + M) SC=O(M)
        sort(strs.begin(), strs.end());
        if (strs.empty()) return "";
        string first = strs[0];
        string last = strs[strs.size()-1];
        string result="";
        for(int i=0;i<first.size();i++){
            if(first[i]==last[i]){
                result.push_back(first[i]);
            } else {
                break;
            }
        }
        return result;
    }
};
