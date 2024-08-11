class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> unique_nums;
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if ( nums[i] != nums[i+1]) {
                unique_nums.push_back(nums[i]);
                count++;
            }
        }
        nums = unique_nums;
        return count;
    }
};

