class Solution {
public:
    int trap(vector<int>& height) {
      int n=height.size();
      vector<int>leftmax(n,0);
      vector<int>rightmax(n,0);
      leftmax[0]=0;
      for(int i=1;i<n;i++)
      {
         leftmax[i]=max(height[i-1],leftmax[i-1]);
      }
      rightmax[n-1]=0;
      for(int i=n-2;i>=0;i--)
      {
        rightmax[i]=max(height[i+1],rightmax[i+1]);
      }
      int area=0;
      int wid=0;
      int ans=0;
      for(int i=0;i<n;i++)
      {
        area=min(leftmax[i],rightmax[i]);
        wid=area-height[i];
        if(wid>0)
        {
            ans+=wid;
        }
      }
      return ans;

    }
};