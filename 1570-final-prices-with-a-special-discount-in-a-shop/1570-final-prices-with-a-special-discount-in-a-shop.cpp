class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer(prices.size());
        stack<int> stack;
        vector<int> nextsmallerelement(prices.size());
        stack.push(-1);
        for(int i=prices.size()-1;i>=0;i--){
            while(prices[i]<stack.top()){
                stack.pop();
            }
            nextsmallerelement[i]=stack.top();
            stack.push(prices[i]);

        }int val=0;
        for(int i=0;i<prices.size();i++){
            if(nextsmallerelement[i]==-1){
                val=prices[i];
            }
            else{
            val=prices[i]-nextsmallerelement[i];
            }
            answer[i]=val;
        }
        return answer;
    }
};