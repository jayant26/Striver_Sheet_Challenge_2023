//if we in the end the array is sorted is not required
// this will give the correct length but modify the array in unsorted manner  
int removeDuplicates(vector<int> &arr, int n) {
	int i=1,j=n-1;
	while(i<=j)
	{
		if(arr[i]==arr[i-1])
		{
			if(arr[i]==arr[j]&&i==j)return i;
			else if(arr[i]==arr[j]&&i!=j)break;
			while(arr[j]==arr[j-1])
			{
				j--;
			}
			swap(arr[i],arr[j]);
			swap(arr[i],arr[i-1]);
			j--;
		}
		i++;
	}
	return i;
}


// if you want the end to sorted also then:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=0,end=1,count=0;
        while(end<(nums.size()))
        {
            if(nums[start]==nums[end])
            {
                end++;
            }
            else
            {
                

                nums[start]=nums[end];
                start++;
                count++;
            }
        }
        return count+1;
    }
};