class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX;
        int maxp=0;
        int profit=0;
        for(int i: prices){
            minp=min(minp,i);
            profit=i-minp;
            maxp=max(profit,maxp);
        }
        return maxp;
    }
};