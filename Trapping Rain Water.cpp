#include <bits/stdc++.h> 
long getTrappedWater(long *height, int n){
    long  ans=0;
        int left=0,right=n-1;
        long lm=0,rm=0;
        while(left<=right)
        {
            if(height[left]<height[right])
            {
                if(height[left]>=lm)lm=height[left];
                else ans+=lm-height[left];

                left++;
            }
            else
            {
                if(height[right]>=rm)rm=height[right];
                else ans+=rm-height[right];
                right--;
            }

        }
        return ans;
}