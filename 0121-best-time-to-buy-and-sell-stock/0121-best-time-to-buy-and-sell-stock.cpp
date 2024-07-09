
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int maxprofit = 0;
        int profitifsoldtoday = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            profitifsoldtoday  = prices[i] - buy;
            if(maxprofit < profitifsoldtoday){
                maxprofit = profitifsoldtoday ;
            }
        }
        return maxprofit;
    }
};