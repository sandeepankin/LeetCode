class Solution {
public:
    
    void swap(int* a, int* b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int a,b;
        int i=0;
        a=0;
        b=n-1;
        
        while(i<=b){
            if(nums[i]==0){
                swap(&nums[i], &nums[a]);
                i++;
                a++;
                continue;
            }
            if(nums[i]==1){
                i++;
                continue;
            }
            else{
                swap(&nums[i], &nums[b]);
                b--;
                continue;
            }
        }
    }
};