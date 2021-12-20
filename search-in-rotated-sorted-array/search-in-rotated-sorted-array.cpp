class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*
        int n=nums.size();
        int low=0;
        int high=n-1;
        
        int temp=nums[high];
        int tempo=high;
        int rotation=0;
        int count=0;
        
        if(nums[0]==target){
            return 0;
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]!=target){
                count++;
            }
        }
        
        if(count==n){
            return -1;
        }
        
        
        while(low<high){
            if(tempo==0&&temp!=target){
                nums[tempo]=temp;
                temp=nums[high];
                tempo=high;
                rotation++;
            }
            if(tempo==0&&temp==target){
                rotation++;
                break;
            }
            else{
                nums[tempo]=nums[tempo-1];
                tempo--;
            }
        }
        return ++rotation;
        */
        int n=nums.size();        
        int low=0,high=n-1,mid;
        
        while(low<=high){
            mid=(low+high)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            if(nums[low]<=nums[mid]){
                if(target<=nums[mid] && target>=nums[low]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(target>=nums[mid]&&target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
        /*
        int beg=0,end=nums.size()-1,mid;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[beg]<=nums[mid])
            {
                if(target<=nums[mid] && target>=nums[beg])
                    end=mid-1;
                else
                    beg=mid+1;
            }
            
            else
            {
                if(target>=nums[mid] && target<=nums[end])
                   beg=mid+1;
                else
                    end=mid-1;
            }
            
        }
        return -1;
    }
    */
};