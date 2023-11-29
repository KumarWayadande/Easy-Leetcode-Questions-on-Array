// #include <vector>
// #include <iostream>
// using namespace std;

// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         int profit = 0;
//         int buyPrice, currentProfit, prevBuyPrice = prices[0];
//         int count = 0;
//         for (int i = 0; i < (prices.size() - 1); i++)
//         {
//             buyPrice = prices[i];
//             if (buyPrice <= prevBuyPrice){
//                 cout << endl << "Iteration : " << (count + 1);
//                 count++;
//                 for (int j = (i + 1); j < prices.size(); j++)
//                 {
//                     if ((prices[j] - buyPrice) > profit)
//                         profit = (prices[j] - buyPrice);
//                 }
//             }
//             prevBuyPrice = prices[i];
//         }
//         return (profit <= 0 ? 0 : profit);
//     }
// };

// int main()
// {

//     vector<int> stockPrices = {7,1,5,3,6,4};

//     // vector<int> stockPrices = {7,6,4,3,1};

//     Solution s;
//     // int profit = s.maxProfit(stockPrices);

//     // cout << "\nProfit : " << profit;
//     cout << "\n Length : " << stockPrices.size();

//     return 0;
// }



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
    }
};