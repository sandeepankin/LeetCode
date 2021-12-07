#include <bits/stdc++.h>

class Solution {
public:
    
    bool containsDuplicate(vector<int>& nums) {
        
        if(nums.empty() || nums.size()==1){
            return false;
        }
            
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]){
                return true;
            }
        }
        
        return false;
        
        /*
        BRUTE FORCE SOLUTION O(N^2)
        
        if(nums.empty()) return false;

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size() && j!=i;j++){
                if(nums[j]==nums[i]){
                    return true;
                }
            }
        }
        
        return false;
        */
    }
};