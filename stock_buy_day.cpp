#include<iostream>
#include<vector>
using namespace std;

class Solution {

    public:
            int maxProfit(vector<int> & prices) {
                int lowPriceIndex = 0, lowPrice = prices[0], highPrice;
            
                for(int i = 1; i < prices.size() - 1; i++){
                    if(prices[i] < lowPrice){
                        lowPrice = prices[i];
                        lowPriceIndex = i;
                    }
                }


                highPrice = lowPrice;

                for(int i = lowPriceIndex; i < prices.size() - 1; i++){
                    if(highPrice < prices[i + 1]){
                        highPrice = prices[i + 1];
                    }
                }

                

                return (highPrice - lowPrice);

            }    
};


int main(){

    Solution s;
    vector<int> vec{3,2,6,5,0,3};
    int profit = s.maxProfit(vec);

    if(profit == 0){
        cout << "\nNo profit";
    }
    else{
        cout << "\nProfit Earned : " << profit;
    }

    return 0;
}