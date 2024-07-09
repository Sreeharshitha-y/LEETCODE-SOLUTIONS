
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int profitifsoldtoday=0;
        int buy=prices[0];
        int n =prices.size();
        for (int i=0;i<n;i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
           profitifsoldtoday= prices[i]-buy;
            if ( profitifsoldtoday>maxprofit){
                maxprofit= profitifsoldtoday;

            }
        }
        return maxprofit;
    }
        
    };
