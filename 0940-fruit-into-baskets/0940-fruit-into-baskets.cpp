class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0;
        int basket1=-1,basket2=-1;
        int count=0,maxcount=0;
        int basketcount1=0,basketcount2=0;
        while(r<fruits.size()){
            if((fruits[r]==basket1 && fruits[r]!=basket2) || (basketcount1==0 && fruits[r]!=basket2)){
                count=r-l+1;
                basket1= fruits[r];
                basketcount1++;
                maxcount=max(maxcount,count);
                r++;
            }
            else if((fruits[r]==basket2 && fruits[r]!=basket1) || (basketcount2==0 && fruits[r]!=basket1)){
                // ((fruits[r] == basket2 || basketcount2 == 0) && fruits[r] != basket1)
                count=r-l+1;
                basket2= fruits[r];
                basketcount2++;
                maxcount=max(maxcount,count);
                r++;
            }
            else{
                // while(basketcount1!=0 && basketcount2!=0){
                    if(fruits[l]==basket1){
                        basketcount1--;
                    }
                    if(fruits[l]==basket2){
                        basketcount2--;
                    }
                    l++;
                // }
            }
        }
return maxcount;
    }
};