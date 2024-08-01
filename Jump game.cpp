class Solution {
public:
    bool canJump(vector<int>& nums) {
        //TC=O(N) SC=O(1)
        int reachable = 0;
        for(int i=0; i<nums.size();i++){
            if(reachable < i){
                return false;
            }
            reachable = max(reachable, i+nums[i]);
        }
        return true;
    }
};
