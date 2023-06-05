#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// This question can be solved using moore voting algorithm
	// Now the logic behin this algorithms is that if suppose a number has frequency n/2 and the remaining person has 
	// a frequency of n/2 =>for each reaction there is an opposing reaction/
	// Now if we increase the reaction by 1 that is N/2+1 or more then there is less opposing reaction 
	// therefore what we will do is that we start with a candidate if we found a same candidate then we increase//
	//else we found an opposing reaction therefore we will decrease the count 
	// if at eny point we found that the count=0; we take on new reaction

	int count=0,reaction=-1;
	for(int i=0;i<n;i++)
	{
		if(count==0)
		{
			reaction=arr[i];
			count++;
		}
		else if(arr[i]!=reaction)
		{
			count--;
		}
		else
		{
			count++;
		}
	}
	// Now we will check for the reaction if its frequency >N/2 or not;
	count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==reaction)count++;
	} 
	if(count>n/2)return reaction;
	return -1;
}