//  ou are given a circular array arr[] of integers, find the maximum possible sum of a non-empty subarray. In a circular array, the subarray can start at the end and wrap around to the beginning. Return the maximum non-empty subarray sum, considering both non-wrapping and wrapping cases.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxCircularSubarraySum(vector<int>&arr){
    int totalSum =arr[0];
    int currMax = arr[0];
    int maxSum = arr[0];
    int currMin = arr[0];
    int minSum = arr[0];
    int circularSum = arr[0];

    for(int i =1;i<arr.size();i++){
        currMax = max(arr[i],currMax+arr[i]);
        maxSum = max(currMax,maxSum);

        currMin = min(arr[i],currMin+arr[i]);
        minSum = min(minSum,currMin);

        totalSum +=arr[i];
    }

    if(maxSum<0){
        return maxSum;
    }

    circularSum= totalSum-minSum;
    return max(circularSum,maxSum);
}

int main(){

    vector<int> arr ={-2};

    cout<<maxCircularSubarraySum(arr);
    return 0;
}