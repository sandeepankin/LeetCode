
class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        
        if(nums.empty()){
            return 0;
        }
        
        int count=1;
        int n=0, k=nums[0];
        nums[n]=nums[0];
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=k){
                nums[++n]=nums[i];
                k=nums[i];
                count++;
            }
        }
        return count;
    }
};