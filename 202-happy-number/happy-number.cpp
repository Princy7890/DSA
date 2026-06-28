class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1)
        {
            if(st.find(n)!=st.end())
            {
                return 0;
            }
            st.insert(n);
            int m=0;
            while(n)
            {
                int digit=n%10;
                 m+=digit*digit;
                 n=n/10;
            }
            
            n=m;
        }
        return 1;
    }
};