class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;
        int len = prices.size();
        int maxVal = 0;
        int minPoint = prices[0];
        for (int i = 1; i < len; i++){
            if (prices[i] < minPoint){
                minPoint = prices[i];
            }
            else if (prices[i] - minPoint > maxVal){
                maxVal = prices[i] - minPoint;
            }
        }
        return maxVal;
    }
};