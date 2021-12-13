#include <bits/stdc++.h>

class Solution {
public:
    
    bool containsDuplicate(vector<int>& nums) {
        //O(n^2) Solution
        /*
        bool val=false;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    val = true;
                    break;
                }
            }
        }
        return val;
        */
        unordered_map<int,int> hash;
        
        for(int i=0;i<nums.size();i++){
            if(hash.find(nums[i])!=hash.end()){
                return true;
            }
            hash[nums[i]]=i;
        }
        return false;
    }
};