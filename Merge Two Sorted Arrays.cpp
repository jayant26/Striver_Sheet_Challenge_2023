vector<int> ninjaAndSortedArrays(vector<int>& a, vector<int>& b, int n, int m) {
	int i=n-1,j=m-1,last=n+m-1;
	while(i>=0&&j>=0)
	{
		if(a[i]<b[j])
		{
			a[last]=b[j];
			j--;
			last--;

		}
		else
		{
			a[last]=a[i];
			i--;
			last--;
		}		
	}
	while(i>=0)
	{
		a[last]=a[i];
		i--;
		last--;
	}
	while(j>=0)
	{
		a[last]=b[j];
		j--;
		last--;

	}
	return a;
}