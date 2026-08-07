class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sz = prices.size();
        int maxProfit = 0;
        int l = 0;
        // int r = 1;
        for(int r=1; r<sz ; r++){
            cout<<prices[r]<<", ";
            maxProfit = max(maxProfit, prices[r] - prices[l]);
            if(prices[r]<prices[l]){
                l=r;
            }
        }
        cout<<endl;

        return maxProfit;
    }
};
