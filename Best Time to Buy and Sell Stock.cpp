class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x = 100006;
        int y = 0;
        int p = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < x){
                x = prices[i];
                y = 0;
            }
            else if(prices[i] > y){
                y = prices[i];
            }
            
            p = max(p, y - x);
            
            
            }
            
        
        return p;
    }
};
