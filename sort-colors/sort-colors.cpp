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
    } 
};