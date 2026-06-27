class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);
        string temp="";
        for(char ch :s)
        {
            if(ch!=' ')
            {
                temp+=ch;
            }
            if(ch==' ')
            {
             
              int pos=temp.back()-'0';
              temp.pop_back();
              ans[pos]=temp;
              temp.clear();

            }
        }
         int pos=temp.back()-'0';
         temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        string filtered="";
       for(int i=0;i<ans.size();i++)
       {
       if(ans[i]!="")
       {
        if(filtered!="")
        {
         filtered+=" ";
        }
        filtered+=ans[i];
       }
       }
       return filtered;
    }
};