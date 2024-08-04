class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,count=0,maxcount=0;
        int flip=k;
        while(r<nums.size()){
            if(nums[r]==1){
                count=r-l+1;
                maxcount=max(count,maxcount);
                r++;
            }
            else if(nums[r]==0 && flip>0){
                count=r-l+1;
                maxcount=max(count,maxcount);
                r++;
                flip--;
            }
            else{
                
                    if(nums[l]==0){
                        flip++;
                        // count=r-l+1;
                        // maxcount=max(count,maxcount);
                    }
                        l++;
                
            }
        }
        return maxcount;
        
    }
};