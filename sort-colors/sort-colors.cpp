#include <vector>

class Solution {
public:
    
    void swap(int* x, int* y){
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    
    void sortColors(vector<int>& nums) {
        
        //Bubble Sort
        /*
        int n = nums.size();
        
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(&nums[j],&nums[j+1]);
                }
            }
        }
        */
        
        //Two Pointers
        /*
        int n=nums.size();
        int k,l;
        k=0;
        l=0;
        vector<int> numsUpd;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                k++;
            }
            if(nums[i]==1){
                l++;
            }
        }
        
        for(int i=0;i<k;i++){
            numsUpd.push_back(0);
        }
        for(int i=k;i<k+l;i++){
            numsUpd.push_back(1);
        }
        for(int i=l;i<n;i++){
            numsUpd.push_back(2);
        }  
        
        for(int i=0;i<n;i++){
            nums[i]=numsUpd[i];
        }
        */
        
        //Dutch National Flag Algorithm
        int n=nums.size();
        if(n==1||n==0){
            return;
        }
        int low, mid, high;
        low=0;
        mid=0;
        high = n-1;
        
        while(mid<=high){
            if(nums[mid]==0){
                swap(&nums[low++], &nums[mid++]);
                continue;
            }
            if(nums[mid]==1){
                mid++;
                continue;
            }
            else{
                swap(&nums[mid], &nums[high--]);
                continue;
            }
        }
    } 
};