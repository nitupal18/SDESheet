class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int cur=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cur<0){
                cur=0; // adding negative in negative doesnt lead anywhere
            }
            cur+=nums[i];
            ans=max(ans,cur);
        }
        return ans;
    }
};