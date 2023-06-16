#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    
    vector<int>coins={1,2,5,10,20,50,100,500,1000};
    int j=coins.size()-1;
    int count=0;
    while(amount!=0)
    {
        if(amount/coins[j])
        {
            count+=amount/coins[j];
            amount=amount%coins[j];
        }
        j--;
    }
    return count;
}
