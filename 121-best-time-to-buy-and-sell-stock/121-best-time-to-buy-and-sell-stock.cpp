class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxP=0,minP=prices[0];
    for (int j = 1; j < prices.size(); j++)
      {
      if (prices[j] - minP > maxP)
      maxP = prices[j] - minP;
      if (prices[j] < minP)
      minP = prices[j];
      }
    return maxP;
    }
};