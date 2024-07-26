class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //BRUTEFORCE APPROACH => TC=O(N logN) SC=O(N)
        // int j=0;
        // vector<int> ans;
        // sort(nums.begin(), nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]!=nums[j]){
        //         j++;
        //     } else {
        //         ans.push_back(nums[j]);
        //         j++;
        //     }
        // }
        // return ans;

       //TC=O(N)  SC=O(N)
        unordered_map<int, int> num_count;
        vector<int> ans;
        for (int num : nums) {
            num_count[num]++;
        }
        for (const auto& pair : num_count) {
            if (pair.second > 1) {
                ans.push_back(pair.first);
            }
        }
        return ans;

    }
};
