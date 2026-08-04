class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>scount(26,0);
        vector<int>pcount(26,0);
        if(p.size()>s.size())
        {
            return ans;
        }
        for(char ch :p)
        pcount[ch-'a']++;

        int k=p.size();

        for(int i=0;i<k;i++)
        {
            scount[s[i]-'a']++;
        
        }
        if(scount==pcount)
        {
            ans.push_back(0);
        }
        for(int i=k;i<s.size();i++)
        {
            scount[s[i]-'a']++;
            scount[s[i-k]-'a']--;
        
        if(scount==pcount)
        {
            ans.push_back(i-k+1);
        }
        }
        return ans;
    }
};