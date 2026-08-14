// Given an array of integers arr[] representing a permutation (i.e., all elements are unique and arranged in some order), find the next lexicographically greater permutation by rearranging the elements of the array.
// If such a permutation does not exist (i.e., the array is the last possible permutation), rearrange the elements to form the lowest possible order (i.e., sorted in ascending order).

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &arr){
    int n = arr.size();
    int pivot = -1;          // index of the element which needs to be swaped


    // to find the pivot
    for(int i=n-2; i>=0; i--){                
        if(arr[i]<arr[i+1]){
            pivot =i;
            break;
        }
    }

    // if the given permutation is the largest return the smallesst
    if(pivot ==-1){
        reverse(arr.begin(),arr.end());
        return;
    }


    // to swap the pivot element with the required element
    for(int i =n-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }

    // arrange the elements after the pivot in descending order                
    //   Original:       2 4 1 7 5 0
    //  After swap:      2 4 5 7 1 0
    //  After reverse:   2 4 5 0 1 7
   
    reverse(arr.begin()+pivot+1,arr.end());
}

int main(){
    vector <int> arr = {2,4,1,7,5,0};
    nextPermutation(arr);
    for(int m : arr){               //This is a range-based for loop. Here, m is the actual value of the array, not the index.
        cout<<m<<" ";
    }
    return 0;
}