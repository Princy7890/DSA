class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>s11(26,0);
        vector<int>s22(26,0);
        if(s1.size()>s2.size())
        {
            return false;
        }
        for(char ch:s1)
        {
          s11[ch-'a']++;
        }
        int k=s1.size();
        for(int i=0;i<k;i++)
        {
            s22[s2[i]-'a']++;

        }
        if(s11==s22)
        {
       return true;
        }
        for(int i=k;i<s2.size();i++)
        {
            s22[s2[i]-'a']++;
            s22[s2[i-k]-'a']--;
            if(s11==s22)
            {
                return true;
                break;
            }
            
        }
        return false;
    }
};