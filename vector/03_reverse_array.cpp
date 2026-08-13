//  Reverse an Array

#include <iostream>
#include <vector>
using namespace std;


// Using Two Pointers

// void reverseArray(vector<int> &arr){
//     int left =0;
//     int right=arr.size()-1;

//     while(left<right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
// }


// using single pointer

void reverseArray(vector<int> &arr){
    int n = arr.size();

    for(int i =0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);
    }
}

int main(){
    vector<int> arr ={1,2,3,4,5};
    reverseArray(arr);
    for(int n:arr){
        cout<<n<<" ";
    }
    return 0;
}