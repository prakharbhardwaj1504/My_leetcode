class Solution {
public:
int binary(vector<int>& nums, int target,int low,int high){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(nums[mid]==target){
        return mid;
    }
    if(target<nums[mid]){
        
        return binary(nums,target,low,mid-1);
    }
    else {

        return binary(nums,target,mid+1,high);
    }
 
}
    int search(vector<int>& nums, int target) {

        return binary(nums,target,0,nums.size()-1);
    }
};