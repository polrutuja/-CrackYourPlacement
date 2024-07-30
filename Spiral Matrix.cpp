class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //TC=O(N*M) SC=O(N)
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, bottom = n-1;
        int left = 0, right = m-1;
        vector<int> ans;

        while(top<=bottom && left<=right){
           //right
        for(int i=left; i<=right; i++){
            ans.push_back(matrix[top][i]);
        } 
        top++;

        //bottom
        for(int i=top; i<=bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

    if(top<=bottom){
        //left
        for(int i=right; i>=left; i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
    }
        
    if(left<=right){
       //top
        for(int i=bottom; i>=top; i--){
            ans.push_back(matrix[i][left]);
        }
        left++;  
    }
        }
     return ans;   
    }
};
