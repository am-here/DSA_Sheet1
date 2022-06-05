class Solution {
public:
    int maxProfit(vector<int>& A) {
        int buy=INT_MAX,ans=0,sell=0;
        for(int i=0;i<A.size()-1;i++)
        {
            if(buy>A[i])
            {
                buy = A[i];
                sell = A[i+1];
            }
            else
                sell = max(sell,A[i+1]);
            ans = max(ans,sell-buy);
        }
        return ans;
    }
};