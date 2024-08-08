class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //OPTIMAL APPROACH => TC=O(N) SC=O(N)
        map<int,int> mpp;
        mpp[0]=1; //imp
        int cnt = 0, preSum = 0;
        for(int i=0;i<nums.size();i++){
            preSum += nums[i];
            int remove = preSum - k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
        return cnt;
    }
};
