class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int mini=INT_MAX;
        int max_profit=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,prices[i]);
            profit=prices[i]-mini;
            max_profit=max(max_profit,profit);
        }
        return max_profit;
    }
};