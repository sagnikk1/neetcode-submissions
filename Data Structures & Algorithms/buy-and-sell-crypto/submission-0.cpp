class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=INT_MIN;
        int profit;
        int mini=prices[0];
        for(int i=0;i<n;i++)
        {
            mini=min(prices[i],mini);
            profit=prices[i]-mini;
            maxprofit=max(profit,maxprofit);
            
        }
        return maxprofit;
    }
};
