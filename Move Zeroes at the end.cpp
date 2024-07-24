class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // //BRUTE FORCE APPROACH
        // vector<int> ans;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0){
        //         ans.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0){
        //         ans.push_back(nums[i]);
        //     }
        // }
        // nums = ans;

        //OPTIMAL APPROACH
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }


    }


};
