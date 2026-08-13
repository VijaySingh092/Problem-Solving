// Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int>&arr,int d){
    int n = arr.size();
    d %=n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}

int main(){

    int m;
    cout<<"Enter the size of the array: ";
    cin>>m;
    vector<int>arr(m);
    cout<<"Enter the elements of the array: ";
    for(int i =0;i<m;i++){
        cin>>arr[i];
    }

    int d;
    cout<<"Enter the number of steps in counter-clock direction : ";
    cin>> d;
    rotateArray(arr,d);
    for(int r:arr){
        cout<<r<<" ";
    }
    return 0;
}