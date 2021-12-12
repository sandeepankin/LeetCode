class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]-prices[i]>prof){
                    prof=prices[j]-prices[i];
                }
            }
        }
        */
        int minNum,prof;
        minNum = 9999999;
        prof = 0;
        for(int i=0;i<prices.size();i++){
            minNum = min(prices[i],minNum);
            prof = max(prof, prices[i]-minNum);
        }
        return prof;
    }
};