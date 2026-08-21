// Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumProduct(vector<int>& arr){
    int maxPro = arr[0];
    int currMax = arr[0];
    int currMin = arr[0];
    for(int i =1;i<arr.size();i++){
        int temp = max({arr[i],arr[i]*currMax,arr[i]*currMin});
        currMin = min({arr[i],arr[i]*currMax,arr[i]*currMin});
        currMax = temp;

        maxPro = max(currMin,maxPro);
        
    }
    return maxPro;
}

int main(){
    vector<int> arr = {-1,0,-2};
    cout<<maximumProduct(arr);
    return 0;
}