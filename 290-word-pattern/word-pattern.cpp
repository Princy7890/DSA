class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string temp="";
        vector<string>word;
        for(char ch:s)
        {
            if(ch!=' ')
            {
            temp+=ch;
            }
            else{
                word.push_back(temp);
                temp="";
            }
        }
        word.push_back(temp);
        if(pattern.size()!=word.size())
        {
            return 0;
        }
        unordered_map<char,string>m1;
        unordered_map<string,char>m2;
        for(int i=0;i<pattern.size();i++)
        {
            char ch=pattern[i];
            string s1=word[i];
        if(m1.count(ch)&&m1[ch]!=s1)
        {
            return 0;
        }
        if(m2.count(s1)&&m2[s1]!=pattern[i])
        {
            return 0;
        }
        m1[ch]=s1;
        m2[s1]=ch;
        }
        return 1;
    }
};