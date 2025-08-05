class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a = 0;
        int b = 1;
        int maxP = 0;
        while(b<prices.size()){
            if(prices[b]>prices[a]){
                maxP = max(maxP, prices[b] - prices[a]);
            }else{
                a = b;
            }
            b++;
        }
        return maxP;
    }
};