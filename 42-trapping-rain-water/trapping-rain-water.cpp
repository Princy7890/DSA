class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n);
        {
            leftmax[0]=height[0];
            for(int i=1;i<n;i++)
            {
                leftmax[i]=max(leftmax[i-1],height[i]);
            }
        }
        vector<int>rightmax(n);
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        int water=0;
        int ans=0;
        int area=0;
        for(int i=0;i<n;i++)
        {
            ans=min(leftmax[i],rightmax[i]);
            area=ans-height[i];
            if(area<=0)
            {
                continue;
            }
            else{
                water+=area;
            }
        }
        return water;
    }
};