#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //O(n^2) Solution
        /*
        vector<int> vect;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    vect.push_back(i);
                    vect.push_back(j);
                    break;
                }
            }
        }
        return vect;
        */
        
        unordered_map<int, int> val;
        vector<int> vect;
        
        for(int i=0;i<nums.size();i++){
            int numToFind = target - nums[i];
            if(val.find(numToFind)!=val.end()){
                return {val[numToFind],i};
            }
            val[nums[i]]=i;
        }
        return {};
    }
};