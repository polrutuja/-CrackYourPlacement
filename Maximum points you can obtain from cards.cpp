class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //TC=2*O(K) SC=O(1)
        int lSum = 0, rSum = 0;
        int maxSum = 0;
        for(int i=0;i<=k-1;i++){
            lSum += cardPoints[i];
            maxSum = lSum;
        }
        int rIndex = cardPoints.size()-1;
        for(int i=k-1; i>=0; i--){
            lSum -= cardPoints[i];
            rSum += cardPoints[rIndex];
            rIndex--;
            maxSum = max(maxSum, lSum+rSum);
        }
        return maxSum;

    }
};
