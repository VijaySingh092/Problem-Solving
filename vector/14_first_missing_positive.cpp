// Given an unsorted integer array nums. Return the smallest positive integer that is not present in arr.

#include<iostream>
using namespace std;
#include<vector>

int firstMissingPositveInteger(vector<int> &arr){
    int n = arr.size();

    for(int i =0;i<n;i++){
        while(arr[i]>0 && arr[i]<n && arr[arr[i]-1]!=arr[i]){
            swap(arr[i],arr[arr[i]-1]);
        }
    }
    for(int i =0;i<n;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
    return n+1;
}

int main(){
    vector<int> arr ={3,4,-1,1};
    cout<<firstMissingPositveInteger(arr);
    return 0;
}