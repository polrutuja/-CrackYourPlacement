class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Better Approach => TC=O(N log N) SC=O(N)
        // map<int, int> mpp;
        // for(int i=0;i<nums.size();i++){ //store cnt of each element in map
        //     mpp[nums[i]]++;
        // }
        // for(auto it:mpp){ //iterate through map to find cnt > n/2
        //     if(it.second > nums.size()/2){
        //         return it.first;
        //     }
        // }
        // return -1;

        //Optimal approach => TC=O(N)+O(N) SC=O(1)
        //MOORE'S VOTING ALGORITHM
        int cnt = 0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            } else if(nums[i] == el){
                cnt++;
            } else {
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el){
                cnt1++;
            }
        }
        if(cnt1 > nums.size()/2){
            return el;
        }
        return -1;
    }
};
