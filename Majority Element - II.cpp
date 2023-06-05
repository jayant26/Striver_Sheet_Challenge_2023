#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &nums)
{
    int n=nums.size();
    vector<int> ans;
    int c1=0,reaction1=-1;
    int c2=0,reaction2=-1;
    for(int i=0;i<n;i++)
    {
        if(c1==0&&nums[i]!=reaction2)
        {
            reaction1=nums[i];
            c1=1;
            
        }
        else if(c2==0&&nums[i]!=reaction1)
        {
            reaction2=nums[i];
            c2=1;
        }else if (nums[i] == reaction1) {
                c1++;
            }else if (nums[i] == reaction2) {
                c2++;
            } else {
                c1--;
                c2--;
            }
    }
    int count1=0,count2=0;
    for (int i = 0; i < n; i++) {
            if (nums[i] == reaction1) {
                count1++;
            }
            if (nums[i] == reaction2) {
                count2++;
            }
        }
 
     if (count1 > n/3) {
            ans.push_back(reaction1);
        }
        if (count2 > n/3) {
            ans.push_back(reaction2);
        }

    return ans;
}