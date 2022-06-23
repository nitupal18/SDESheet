class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Min=INT_MAX;
        int ans=INT_MIN;
        int n=prices.size();
        for(int i=0;i<n;i++){
            Min=min(Min,prices[i]);
            ans=max(ans,prices[i]-Min);
        }
        return ans;
        
    }
};