class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
     vector<int>left(n);
     vector<int>right(n);
     int lefty=INT_MIN;
     int righty=INT_MIN;
     int ans=0;
     for(int i=0;i<n;i++)
     {
        lefty=max(lefty,height[i]);
        left[i]=lefty;
    
     }
     for(int i=n-1;i>=0;i--)
     {
        righty=max(righty,height[i]);
        right[i]=righty;
     }
     int ansss;

     for(int i=0;i<n;i++)
     {
     ansss=min(left[i],right[i])-height[i];
     ans+=ansss;
     }
     return ans;
    }
};




















