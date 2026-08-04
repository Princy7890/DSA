class Solution {
public:
    int compress(vector<char>& chars) {
     int i=0;
     int index=0;
     int curr_index=chars[0];
     int n=chars.size();
     while(i<n)
     {
        int count=0;
        curr_index=chars[i];
        while(i<n&&chars[i]==curr_index)
        {
            count++;
            i++;
        }
        chars[index]=curr_index;
        index++;
        string ans=to_string(count);
        if(count>1)
        {
            for(char &ch :ans)
            {
                chars[index]=ch;
                index++;
            }
        }

     }
     return index;
    }
};