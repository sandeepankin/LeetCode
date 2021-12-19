class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int temp;
        temp = nums[high];
        int tempo;
        tempo = high;
        while(low<high){
            if(tempo==0 && temp<nums[tempo+1]){
                nums[tempo]=temp;
                temp=nums[high];
                tempo=high;
            }
            else if(tempo==0 && temp>nums[tempo+1]){
                break;
            }
            else{
                nums[tempo]=nums[tempo-1];
                tempo--;
            }
        }
        return nums[0];        
    }
};