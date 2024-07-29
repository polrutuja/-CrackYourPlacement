class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //TC=O(N) SC=O(1)
        // int maxProd = INT_MIN;
        // int n= nums.size();
        // for(int i=0;i<n-2;i++){
        //     int Prod = nums[i]*nums[i+1]*nums[i+2];
        //     maxProd = max(maxProd, Prod);
        // }
        // return maxProd0;

        //TC=O(N logN) SC=O(1)
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxProd = max(nums[n-1] * nums[n-2] * nums[n-3], nums[0] * nums[1] * nums[n-1]);
        return maxProd;
    }
};
