class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //TC=O(M+N) SC=O(M+N)
        // vector<int> ans(m+n);
        // int i=0, j=0, k=0;
        // while(i<m && j<n){
        //     if(nums1[i] < nums2[j]){
        //         ans[k++]=nums1[i++];
        //     } else {
        //         ans[k++]=nums2[j++];
        //     }
        // }
        // while(i<m){
        //     ans[k++]=nums1[i++];
        // }
        // while(j<n){
        //     ans[k++]=nums2[j++];
        // }
        // nums1 = ans;

        //TC=O(N+M) SC=O(1)
        int i = m - 1; 
        int j = n - 1; 
        int k = m + n - 1; 
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
