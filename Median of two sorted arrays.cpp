double median(vector<int>& a, vector<int>& b) {
	if(b.size()<a.size()) return median(b,a);

	int n=a.size();
	int m=b.size();
	int l=0,h=n;
	while(l<=h)
	{
		int mid=(l+h)/2;
		int mid2=(n+m+1)/2 - mid;

		// This checks are for boundaries conditon
		int l1=mid==0?INT_MIN:a[mid-1];
		int l2=mid2==0?INT_MIN:b[mid2-1];

		int r1=mid==n?INT_MAX:a[mid];
		int r2=mid2==m?INT_MAX:b[mid2];

		// Now for a valid partition 
		// l1<=r2&&l2<=r1;

		if(l1<=r2&&l2<=r1)
		{
			// Two condtion for valid partion 
			// the sum of lengths is even or odd
			// as if even we need to take the average of two numbers

			if((n+m)%2==0)
			{
				return (max(l1,l2)+min(r1,r2))/2.0;
			}
			else
			{
				return max(l1,l2);
			}
		}
		// if not a valid partion move accordingly
		else if(l1>r2)
		{
			h=mid-1;
		}
		else{
			l=mid+1;
		}

	}
	return 0.0;
}