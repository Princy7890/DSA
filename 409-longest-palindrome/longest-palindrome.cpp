class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
       for (char ch:s)
       {
        m[ch]++;
       }
        int ans=0;
        bool flag=0;
        for(auto it:m)
        {
            if(it.second%2==0)
            {
                ans+=it.second;
            }
           
            else{
              ans+=it.second-1;
              flag=1;
            }
        }
        if(flag)
        {
            ans++;
        }
        return ans;
    }
};