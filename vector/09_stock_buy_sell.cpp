// Given an array prices[] representing stock prices, find the maximum total profit that can be earned by buying and selling the stock any number of times.
// Note: We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day.

#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &prices){
    int profit =0;

    for(int i =1;i<prices.size();i++){
        if(prices[i]>prices[i-1]){
            profit +=prices[i]-prices[i-1];
        }
    }

    return profit;
}

int main(){
    vector<int> prices={100, 180, 260, 310, 40, 535, 695};
    cout<<maxProfit(prices);
    return 0;
}