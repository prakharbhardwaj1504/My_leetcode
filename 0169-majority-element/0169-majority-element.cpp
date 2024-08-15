class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int ,int> maps;
        
        for(auto n:nums){
            maps[n]++;
            
        }
        int maz=0;
        int maxelement=0;
        for(auto n:maps){
            if(n.second>maz){
                maxelement=n.first;
                maz=n.second;
            }
        }

        return maxelement;
    }
};