class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        /*
        
        int l;
        int m;
        l=nums.size()-1;
        int n;
        n=1;
        
        if(nums.empty() || nums.size()==1){
            return;
        }
        
        while(l>=0 && n<=k){
            if(l==nums.size()-1 && nums.size()>1){
                m=nums[l];
                l--;
            }
            if(l>0 && l<nums.size()-1){
                nums[l+1]=nums[l];
                l--;
            }
            else{
                nums[l+1]=nums[l];
                nums[l] = m;
                l=nums.size()-1;
                n++;       
            }
        }
        */
        
        /*
        
        int i,j,l;
        i=nums.size()-1;
        l=1;
        
        if(nums.empty() || nums.size()==1){
            return;
        }
        
        while(i>=0 && l<=k){
            if(i+1==nums.size()){
                j=nums[i--];
            }
            if(i>0 && i<nums.size()-1){
                nums[i+1] = nums[i];
                i--;
            }
            else{
                nums[i+1] = nums[i];
                nums[i] = j;
                i=nums.size()-1;
                l++;
            }
        }
        */
        

        int new_nums[nums.size()];
        int i=0;
        int m=0;
        
        if(k>=nums.size()){
            k=k%nums.size();
        }
        int j=k;
        
        if(nums.empty() || nums.size()==1 || k==0){
            return;
        }
        
        while(j>=1){
            new_nums[i++]=nums[nums.size()-(j--)];
        }
        
        for(int p=0;p<nums.size()-1;p++){
            if(i<=nums.size()-1){
                new_nums[i]=nums[p];
                i++;
            }
            else{
                break;
            }
        }
        
        for(int p=0;p<nums.size();p++){
            nums[p] = new_nums[p];
        }

        
    }
};