// Given a sorted array arr[]. Find the element that appears only once in the array. All other elements appear exactly twice

#include<iostream>
using namespace std;
#include<vector>

int findSingle(vector<int> arr){
    int ans =0;
    for(int x: arr){
        ans^=x;
    }
    return ans;
}

int main(){
    vector<int> arr ={1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65};
    cout<<findSingle(arr);
    return 0;
}