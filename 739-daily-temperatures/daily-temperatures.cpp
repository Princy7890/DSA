class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n,0);
        stack<int>st;
        unordered_map<int,int>m;
        st.push(temperatures[n-1]);
        m[temperatures[n-1]]=n-1;
        for(int i=n-2;i>=0;i--)
        {
 while(!st.empty()&&temperatures[i]>=st.top())
  {
    st.pop();
  }
  if(st.empty())
  {
    ans[i]=0;
  }
  else{
    ans[i]=m[st.top()]-i;
  }
  st.push(temperatures[i]);
  m[temperatures[i]]=i;
        }
        return ans;
    }
};