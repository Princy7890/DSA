class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
          for(int i=0;i<=n-m;i++)
          {
            int start=i;
            int end=0;
            while(end<m&&haystack[start]==needle[end])
            {
                start++;
                end++;
            }
            if(end==m)
            {
                return i;
            }
          }
          return -1;
    }
};