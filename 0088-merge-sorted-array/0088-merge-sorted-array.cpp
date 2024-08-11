class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int l=m-1,r=n-1;
       int last=m+n-1;
       while(l>=0 && r>=0){
        if(nums1[l]>nums2[r]){
            nums1[last]=nums1[l];
            last--;
            l--;
        }
        else{
            nums1[last]=nums2[r];
            r--;
            last--;
        }
       }
       while(r>=0){
        nums1[last]=nums2[r];
        r--;
        last--;
       }
    }
};