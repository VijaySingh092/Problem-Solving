// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include<iostream>
#include<vector>
using namespace std;

int maxSubArraySum(vector<int> &arr){
    int res = arr[0];
    int maxSum = arr[0];

    for(int i =1;i<arr.size();i++){
        maxSum = max(arr[i],maxSum+arr[i]);
        res = max(res, maxSum);
    }
    return res;
}
int main(){
    vector<int>arr={2, 3, -8, 7, -1, 2, 3};
    cout<<maxSubArraySum(arr);
    return 0;
}