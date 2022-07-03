class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int minnum;
        int setpt=999999999;
        int maxProfit=0;
        
        for(int i=0;i<n;i++){
            if(prices[i]<setpt){
                minnum = prices[i];
                setpt = minnum;
            }
            maxProfit = max(maxProfit, prices[i]-minnum);
        }
        
        return maxProfit;
    }
};