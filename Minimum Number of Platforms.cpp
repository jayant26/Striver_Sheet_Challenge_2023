int calculateMinPatforms(int a[], int d[], int n) {
    
    sort(a,a+n);
    sort(d,d+n);
    int i=0,j=0;
    int count=0;
    int ans=0;
    while(i<n&&j<n)
    {
        if(a[i]>d[j])
        {
            count--;
            j++;
        }
        else
        {
            count++;
            i++;
        }
        ans=max(ans,count);
    }
    return ans;
    
    // Brute force more space complexity
    // vector<pair<int,int>>t;
    // for(int i=0;i<n;i++)
    // {
    //     t.push_back({a[i],d[i]});
    // }
    // sort(t.begin(),t.end());
    // int ans=1;
    // int arrival=t[0].second;

    // priority_queue<int,vector<int>,greater<int>>q;
    // q.push(t[0].second);
    // for(int i=1;i<n;i++)
    // {
    //     if(t[i].first>q.top())q.pop();
    //     else{
    //         ans++;

    //     }
    //     q.push(t[i].second);


        
    // }
    // return ans;
}