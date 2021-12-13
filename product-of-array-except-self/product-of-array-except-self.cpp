#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /*
        int total=1;
        int anTotal = 1;
        vector<int> vect;
        for(int i=0;i<nums.size();i++){
            total = total*nums[i];
            if(nums[i]!=0){
                anTotal = anTotal*nums[i];
            }
        }
        int arrElement;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                arrElement = total/nums[i];
                vect.push_back(arrElement);
            }
            else{
                vect.push_back(anTotal);
            }
        }
        return vect;
        */
        int n=nums.size();
        vector<int> fromFirst(n);
        vector<int> fromLast(n);
        fromFirst[0]=1;
        fromLast[0]=1;

        //Multiplication from left and right
        for(int i=1;i<n;i++){
            fromFirst[i]=fromFirst[i-1]*nums[i-1];
            fromLast[i]=fromLast[i-1]*nums[n-i];
        }
        
        vector<int> total(n);
        for(int i=0;i<n;i++){
            total[i]=fromFirst[i]*fromLast[n-1-i];
        }
        return total;
    }
};