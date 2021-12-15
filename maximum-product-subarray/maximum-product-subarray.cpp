class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max_prod=INT_MIN;
        int max_prod_now=1;
        
        for(int i=0;i<n;i++){
            max_prod_now = max_prod_now*nums[i];
            max_prod = max(max_prod,max_prod_now);
            
            if(max_prod_now==0){
                max_prod_now=1;
            }
        }
        
        max_prod_now = 1;
        
        for(int i=n-1;i>=0;i--){
            max_prod_now = max_prod_now*nums[i];
            max_prod = max(max_prod,max_prod_now);
            
            if(max_prod_now==0){
                max_prod_now=1;
            }            
        }
        return max_prod;
    }
};