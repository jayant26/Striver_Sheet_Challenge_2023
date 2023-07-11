#include <bits/stdc++.h> 

bool isPalindrome(string x)
{
    string y=x;
    reverse(y.begin(),y.end());
    if(y==x)return true;
    return false;
}
void help(int index,vector<vector<string>>&ans,vector<string>&temp,string &s)
{
  if (index == s.size()) {
      ans.push_back(temp);
    return;
  }
    for(int i=index;i<s.size();i++)
    {
        if(isPalindrome(s.substr(index,i-index+1)))
        {
            // if the above condition is true we found a partition which makes a string palindrom
            temp.push_back(s.substr(index,i-index+1));
            // Now we will check for the next  that is where can we make the partition again
            help(i+1,ans,temp,s);
            // this is the backtracking strep
            temp.pop_back();
        }
    }
}



vector<vector<string>> partition(string &s) 
{
    vector<vector<string>>ans;
    vector<string>temp;

    help(0,ans,temp,s);
    return ans;
}