class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int prefixsum=0;
        m[0]=1;
        int n=nums.size();
        int i=0;
        int count=0;
        while(i<n)
        {
            prefixsum+=nums[i];
            if(m.find(prefixsum-k)!=m.end())
            {
                count+=m[prefixsum-k];
            }
            m[prefixsum]++;
            i++;
        }
        return count;
    }
};