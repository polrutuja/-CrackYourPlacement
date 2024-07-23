class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // //BRUTE FORCE approach => TC:O(n) SC:O(1)
        int cnt_0 = 0, cnt_1=0, cnt_2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt_0++;
            } else if(nums[i]==1){
                cnt_1++;
            } else {
                cnt_2++;
            }
        }
        int first = 0,
        second = cnt_0,
        third = cnt_0+cnt_1;
        for(int i=first;i<second;i++){
            nums[i]=0;
        }
        for(int i=second;i<third;i++){
            nums[i]=1;
        }
        for(int i=third;i<nums.size();i++){
            nums[i]=2;
        }

        //OPTIMAL APPROACH => TC:O(n) SC:O(1)
        //initialize start, mid and end
        int start = 0, mid = 0, end = nums.size()-1;
        while(mid <= end){
            //if 0 => swap start with mid and increment both
            if(nums[mid] == 0){
                swap(nums[start],nums[mid]);
                start++;
                mid++;
            } else if(nums[mid] == 1){
            //if 1 => increment mid    
                mid++;
            } else {
            //if 2 => swap mid and end and decrement end
                swap(nums[mid],nums[end]);
                end--;
            }
        }




    }
};
