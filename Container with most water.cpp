class Solution {
public:
    int maxArea(vector<int>& height) {
        //BRUTE FORCE APPROACH => TC=O(N^2) SC=O(1)
        // int area = 0;
        // int maxArea  = 0;
        // for(int i=0; i<height.size();i++){
        //     for(int j=i;j<height.size();j++){
        //         area = (j-i)*min(height[i], height[j]);
        //         maxArea = max(area, maxArea);
        //     }
        // }
        // return maxArea;

        //OPTIMAL APPROACH => TC=O(N) SC=O(1)
        int l = 0, r = height.size()-1;
        int area = 0, maxArea = 0;
        while(l<r){
            area = (r-l)*min(height[l], height[r]);
            maxArea = max(area, maxArea);
            if(height[l]<height[r]){
            l++;
        } else {
            r--;
        }
        }
        return maxArea;
    }
};
