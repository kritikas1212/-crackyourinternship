class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        std::unordered_map<int, int> count={{0,1}};
        //we can optimise space by using an array
        int prefixsum=0;
        int result=0;
        for(int num: nums){
            prefixsum+=num;
            int rem;
            rem=prefixsum%k;
            if (rem <0){
                rem=rem+k;
            }
            if (count.find(rem)!=count.end()){
                result+=count[rem];
                count[rem]++;
            }
            else
            count[rem]=1;
        }
        return result;
    }
    
};