//Given an array arr[] consisting of n integers, find all the array elements which occurs more than floor(n/3) times. Return the resulting array in strictly increasing order. If no such elements exist, return an empty array.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int>majorityElement(vector<int> &arr){
    int n = arr.size();
    vector<int>result;

    sort(arr.begin(),arr.end());

    int count =1;

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            if(count>n/3){
                result.push_back(arr[i-1]);
            }
            count =1;
        }
    }
    if(count>n/3){
        result.push_back(arr[n-1]);
    }
return result;
}

int main(){
    vector<int> arr={1,2,3,1,1,2,2,2,1,3,1,1,1,1,1,1,};
    vector<int> result =majorityElement(arr);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}
