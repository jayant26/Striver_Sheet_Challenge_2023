int singleNonDuplicate(vector<int>& arr)
{
	int l=0,h=arr.size()-1;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(arr[mid]==arr[mid^1])l=mid+1;
		else h=mid-1;
	}
	return arr[l];
	//O(N) solution but we can do better than that by binary search as the array is sorted
	// int xr=0;
	// for(int i=0;i<arr.size();i++)
	// {
	// 	xr^=arr[i];
	// }
	// return xr;

}
	