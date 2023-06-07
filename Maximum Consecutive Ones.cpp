int longestSubSeg(vector<int> &arr , int n, int k){
    int i=0,j=0;
    int ans=0;
   while(i<n)
   {
       if(arr[i]==0)
       {
           k--;
       }
       while(k<0)
       {
           if(arr[j]==0)
           {
               k++;
           }
           j++;
       }
       i++;
       ans=max(ans,i-j);
   }
    return ans;
}
