class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        if(strs.size()==0) return "";
        int i;
        for(i=0;i<strs[0].size();i++)
        {
            char ch=strs[0][i];
            int j=strs.size()-1;
            if(i>=strs[j].size()||ch!=strs[j][i])
            {
                break;
            }
        }
        return strs[0].substr(0,i);
    }
};