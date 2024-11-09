class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int n = prices.size();
            int leftmin = prices[0];
            int maxprofit = 0;
            for (int i = 0; i < n; i++)
            {
                if (prices[i] < leftmin) leftmin = prices[i];
                else
                {
                    maxprofit = max(maxprofit, prices[i] - leftmin);
                }
            }
            return maxprofit;
        }
};
