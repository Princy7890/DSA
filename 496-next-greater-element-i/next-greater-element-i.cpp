class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>m;
        int n=nums2.size();
        vector<int>ans(nums1.size(),-1);
          st.push(nums2[n-1]);
          m[nums2[n-1]]=-1;
         for(int i=n-2;i>=0;i--)
         {
            while(!st.empty()&&nums2[i]>=st.top())
            {
                st.pop();
            }
            if(st.empty())
            {
                m[nums2[i]]=-1;
            }
            else{
            m[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
            
         }
         for(int i=0;i<nums1.size();i++)
          {
            ans[i]=m[nums1[i]];
          }    

        return ans;



    }
};