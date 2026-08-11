class Solution {
public:
    int maxProfit(vector<int>& prices) {
//more optimised code by watching striver video

//if we selling on ith day, then we must buy at minimum price from 1st to (i-1)th day

int n = prices.size();
int mini = prices[0];
int profit = 0;

for(int i = 1;i<n;i++){
    int cost = prices[i] - mini;
    profit = max(profit,cost);
    mini = min(mini,prices[i]);

}
return profit;

    }
};
