class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //this is not the most optimised solution attempt it again 
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            if (nums[j]+nums[i]==target)
            return {i,j};}


        }
        return{};
    }
};