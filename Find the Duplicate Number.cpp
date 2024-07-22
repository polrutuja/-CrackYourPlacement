class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int repeatedNum = 0;
        //USING SORTING =>
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] == nums[i+1]){
                repeatedNum = nums[i];
            }
        }
        return repeatedNum;


        //BRUTE FORCE APPROACH =>
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    repeatedNum = nums[i];
                }
            }
        }
        return repeatedNum;


        //OPTIMIISED APPROACH =>
        //start fast and slow pointer until they meet
        int slow = 0, fast = 0;
        do{
            slow = nums[slow]; //slow will move by one pointer
            fast = nums[nums[fast]]; //fast will move by two pointers
        } while(slow != fast);
        //after they meet, make slow again 0 and
        //move both pointers at same speed until they meet again
        slow = 0;
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;

    }
};
