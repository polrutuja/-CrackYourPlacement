class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //TC=O(N^2) SC=O(N)
        unordered_map<string, vector<int>> map;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    string key = to_string(nums[i]) + "," + to_string(nums[left]) + "," + to_string(nums[right]);
                    if (map.find(key) == map.end()) {
                        map[key] = {nums[i], nums[left], nums[right]};
                        ans.push_back({nums[i], nums[left], nums[right]});
                    }
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return ans;
        
    }
    
    
};
