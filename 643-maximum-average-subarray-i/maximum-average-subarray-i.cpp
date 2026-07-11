class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
           int maxsum=0;
           int sum=0;
           int greatsum=0;
           for(int i=0;i<k;i++)
           {
            maxsum+=nums[i];
           }
           greatsum=maxsum;
           for(int i=k;i<n;i++)
           {
           maxsum+=nums[i];
           maxsum-=nums[i-k];
           greatsum=max(greatsum,maxsum);
           }
           return(double)greatsum/k;
    }
};