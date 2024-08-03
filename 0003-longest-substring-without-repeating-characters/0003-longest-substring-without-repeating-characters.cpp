class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,bool> map;
        int l=0;
        int r=0;
        int count=0;
        int maxcount=0;
        while(r<s.length()){
            if(!map[s[r]]){
            count=r-l+1;
            map[s[r]]=true;
            maxcount=max(maxcount,count);
            r++;
            }
            else{
                map[s[l]]=false;
                l++;
            }
            

        }
        return maxcount;
    }
};