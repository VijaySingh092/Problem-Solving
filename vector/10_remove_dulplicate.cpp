// You are given a sorted array arr[] containing positive integers. Your task is to remove all duplicate elements from this array such that each element appears only once. 
// Return an array containing these distinct elements in the same order as they appeared.


#include<iostream>
using namespace std;
#include<vector>

vector<int> removeDuplicate(vector<int> &arr){
    int j =0;
    for(int i =1;i<arr.size();i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    arr.resize(j+1);
    return arr;
}

int main(){
    vector<int> arr ={0,0,1,1,1,2,2,3,3,4};
    removeDuplicate(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}