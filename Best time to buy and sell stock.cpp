class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //BRUTE FORCE APPROACH => TC=O(N) SC=O(N)
        // vector<int> aux(prices.size());
        // int auxProfit = 0;
        // int maxProfit = 0;
        // int profit = 0;
        // for (int j = prices.size()-1;j>=0;j--){
        //     auxProfit = max(auxProfit, prices[j]);
        //     aux[j]=auxProfit;
        // }
        // for(int i=0;i<prices.size();i++){
        //     profit = aux[i]-prices[i];
        //     maxProfit = max(maxProfit,profit);
        // }
        // return maxProfit;
        

        //OPTIMAL APPROACH => TC=O(1) SC=O(1)
        int minSofar = prices[0];
        int maxProfit = 0;
        for(int i=0; i<prices.size(); i++){
            minSofar=min(prices[i], minSofar);
            int profit = prices[i]-minSofar;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};
