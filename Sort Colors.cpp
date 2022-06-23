class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int temp=0;
        int r=n-1;
        while(temp<=r){
            if(nums[temp]==2){
                swap(nums[temp],nums[r--]);
            }else if(nums[temp]==0){
                swap(nums[temp],nums[l++]);
                temp++;
            }else{
                temp++;
            }
        }
    }
};