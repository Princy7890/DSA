class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0,n=chars.size();
        int i=0;
        int curr_char=chars[i];
        while(i<n)
        {
            curr_char=chars[i];
            int count=0;
            while(i<n&&chars[i]==curr_char)
            {
           count++;
           i++;
            }
            chars[index]=curr_char;
            index++;
            
            if(count>1)
            {
                string ans=to_string(count);
            
            for(char &ch : ans)
            {
                chars[index]=ch;
                index++;
            }
            }
        }

        return index;
    }
};