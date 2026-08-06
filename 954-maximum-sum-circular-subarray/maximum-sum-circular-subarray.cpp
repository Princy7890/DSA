class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currmax=0;
        int maxsum=INT_MIN;
        int currmin=0;
        int minsum=INT_MAX;
        int totalsum=0;

        for(int i=0;i<nums.size();i++)
        {
           totalsum+=nums[i];
           currmax=max(nums[i],currmax+nums[i]);
           maxsum=max(maxsum,currmax);

           currmin=min(nums[i],currmin+nums[i]);
           minsum=min(minsum,currmin);
           
        }
        if(maxsum<0)
        {
            return maxsum;
        }
        return max(maxsum,totalsum-minsum);
    }
};