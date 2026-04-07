class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>answer(n,1);
        int prefixsum=1;
        int suffixsum=1;
        for(int i=0;i<n;i++)
        {
            answer[i]=prefixsum;
            prefixsum*=nums[i];          
        }
        for(int i=n-1;i>=0;i--)
        {
            answer[i]*=suffixsum;
            suffixsum*=nums[i];
        }
     return answer;
    }
};