// Given an array prices[] of non-negative integers, representing the prices of the stocks on different days. The task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int stockProfit(vector<int> &prices){

    int n = prices.size();
    int Profit =0;
    int buy=prices[0];


    for(int i =1;i<n;i++){
        if(prices[i]<buy){
            buy=prices[i];
        }
        if(prices[i]-buy>Profit){
            Profit = prices[i]-buy;
        }
    }

    return Profit;
}

int main(){
    vector<int> prices ={7, 10, 1, 3, 6, 9, 2};
    cout<<stockProfit(prices);

    return 0;
}