#include<bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    vector<int> profit(n,0);
    int maxSell = prices[n-1];
    int ans = INT_MIN;
    
    for(int i=n-1;i>=0;i--){
        profit[i] = maxSell - prices[i];
        ans = max(ans,profit[i]);
        if(prices[i] > maxSell) maxSell = prices[i];
    }
    return ans;
}
