#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    //Need to first buy the stock than only you can sell
    int mn=prices[0];
    int n=prices.size();
    int mx=0;
    for(int i=1;i<n;i++)
    {
        int profit=prices[i]-mn;
        mx=max(mx,profit);
        mn=min(mn,prices[i]);
    }
    return mx;
}
