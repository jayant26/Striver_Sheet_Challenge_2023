#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
       int index=0;
        int swap_number;

        for(int i=nums.size()-1;i>0;i--){
     
        if(nums[i]>nums[i-1])
        {
            swap_number=nums[i-1];
            index=i;
            break;
        }}

        int mini=INT_MAX;
        int index2=-1;
        for(int i=nums.size()-1;i>=index;i--)
        {
            if(nums[i]>swap_number&&nums[i]<mini)
            {
                index2=i;
                mini=min(mini,nums[i]);
            }
        }
      
        if(index2!=-1)swap(nums[index-1],nums[index2]);

        sort(nums.begin()+index,nums.end());
        return nums;
}