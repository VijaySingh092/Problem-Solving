// C++ program to find the second largest element in the array
// using one traversal

#include<iostream>
#include <vector>
using namespace std;

int getSecondLargest(vector<int> &arr){
    int n = arr.size();
    int largest =-1;
    int secLargest=-1;

    for(int i =0; i<n; i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secLargest){
            secLargest = arr[i];
        }
    }
    return secLargest;
}

int main(){
    vector<int> arr={12, 35, 10, 34,1,1};
    cout<<getSecondLargest(arr);
    return 0;
}