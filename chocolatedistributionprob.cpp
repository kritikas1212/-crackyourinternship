class Solution {
  public:
    int findMinDiff(vector<int> arr, int m) {
        int len=arr.size();
        if(m==0||len==0) return 0;
        if(m>len)return -1;
        int mindiff=INT_MAX;
        int diff;
        sort(arr.begin(),arr.end());
        for(int i=0;i+m-1<len;i++){
            diff=arr[i+m-1]-arr[i];
            mindiff=min(mindiff,diff);
        }
        return mindiff;
        
    }
};