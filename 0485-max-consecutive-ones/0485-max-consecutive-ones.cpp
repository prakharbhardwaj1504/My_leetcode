class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int r=0,l=0;
        int count=0,maxcount=0;
        while(r<nums.size()){
            if(nums[r]){
                count=r-l+1;
                maxcount=max(count,maxcount);
                r++;
            }
            else{
                l=++r;
            }
        }
        return maxcount;
    }
};