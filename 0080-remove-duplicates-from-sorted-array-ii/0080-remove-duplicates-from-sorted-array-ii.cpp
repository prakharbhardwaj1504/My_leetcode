class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int val= nums[0];
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(val==nums[i]){
                count++;
            }
            else{
                count=0;
                val=nums[i];
                i--;
            }
            if(count>2){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};