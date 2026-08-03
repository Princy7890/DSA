class Solution {
public:
    string decodeString(string s) {
        int num=0;
        string curr="";
        stack<int>number;
        stack<string>str;
        for(char ch :s)
        {
            if(isdigit(ch))
            {
                num=num*10+(ch-'0');
            }
            else if(ch=='[')
            {
                number.push(num);
                str.push(curr);
                num=0;
                curr="";
            }
            else if(ch==']')
            {
                int repeat=number.top();
                number.pop();
                string temp=str.top();
                str.pop();
                while(repeat--)
                {
                    temp+=curr;
                }
                curr=temp;
            }
            else{
                curr+=ch;
            }
        }
     return curr;
    }
};