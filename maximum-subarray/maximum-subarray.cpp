class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //Kadane's Algorithm
        int n=nums.size();
        int max_total = INT_MIN;
        int max_so_far = 0;
        
        for(int i=0;i<n;i++){
            max_so_far = max_so_far + nums[i];
            
            if(max_total<max_so_far){
                max_total = max_so_far;
            }
            if(max_so_far<0){
                max_so_far=0;
            }
        }
        return max_total;
    }
};