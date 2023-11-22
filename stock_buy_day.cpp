// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {

//     public:
//             int maxProfit(vector<int> & prices) {
//                 int lowPriceIndex = 0, lowPrice = prices[0], highPrice;
            
//                 for(int i = 1; i < prices.size() - 1; i++){
//                     if(prices[i] < lowPrice){
//                         lowPrice = prices[i];
//                         lowPriceIndex = i;
//                     }
//                 }


//                 highPrice = lowPrice;

//                 for(int i = lowPriceIndex; i < prices.size() - 1; i++){
//                     if(highPrice < prices[i + 1]){
//                         highPrice = prices[i + 1];
//                     }
//                 }

//                 // if(lowPrice == 0 && highPrice == 1)
//                 //     return (highPrice - lowPrice);
//                 // else
//                 //     if(lowPrice == 0)
//                 //         return ((highPrice - lowPrice) + 1);
//                 //     else
//                 //         return ((highPrice - lowPrice));

//                 return (highPrice - lowPrice);

//             }    
// };


// int main(){

//     Solution s;
//     vector<int> vec{3,2,6,5,0,3};
//     {2,1,2,0,1};
//     int profit = s.maxProfit(vec);

//     if(profit == 0){
//         cout << "\nNo profit";
//     }
//     else{
//         cout << "\nProfit Earned : " << profit;
//     }

//     return 0;
// }