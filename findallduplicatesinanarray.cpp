class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dup;
        
        /* brute force
        for(int i=0;i<nums.size();i++){
             for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    dup.push_back(nums[j]);
                }
            }
            
        }
        return dup;
    }*/
    /*unordered_map<int, int> mpp;(better)
    for (int i: nums){
        mpp[i]++;
        if(mpp[i]>1)
        dup.push_back(i);

    }*/
    //(best ig)
    for(int i =0;i<size(nums);i++){
        int ind=abs(nums[i])-1;
        if(nums[ind]<0){
            dup.push_back(ind+1);
        }
        nums[ind]=-nums[ind];//the logic used here is v clever come back and revise it
    }
    return dup;

}
};