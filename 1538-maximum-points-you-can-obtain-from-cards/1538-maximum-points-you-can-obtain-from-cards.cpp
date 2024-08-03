class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=k-1;
        int r=cardPoints.size()-1;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int maxsum=sum;
        while(l>=0){
            sum-=cardPoints[l];
            sum+=cardPoints[r];
            l--;
            r--;
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};