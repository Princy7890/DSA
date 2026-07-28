class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>nsr(heights.size(),n);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&heights[i]<heights[st.top()])
            {
                nsr[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        stack<int>s;
        vector<int>nsl(heights.size(),-1);
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty()&&heights[i]<heights[s.top()])
            {
                nsl[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        int areass=INT_MIN;
        int area=0;
        int width=0;
        for(int i=0;i<n;i++)
        {
            width=nsr[i]-nsl[i]-1;
          area=heights[i]*width;
          areass=max(areass,area);
        }
        return areass;

    }
};