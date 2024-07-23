class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      //  TC:O(n) SC:O(1)
        //initialize i=0 and j=1 and check if both elements are same 
        int j = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                j++;
            }
               nums[j] = nums[i];
        } 
        //logic: j will be assigning duplicates number to its index
        // and i will be checking that through whole array
        //if i and j element are different then i element get assigned to j and increments j 
        
        nums.resize(j+1);
        return nums.size();

    }
};
