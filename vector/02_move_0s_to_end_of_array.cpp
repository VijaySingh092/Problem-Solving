//Move all Zeros to End of Array

#include<iostream>
#include<vector>
using namespace std;

void pushZerosToEnd(vector<int> &arr){
    int count =0;
    int n = arr.size();

    for(int i =0;i<n;i++){
        if(arr[i]!=0){             // check if the value is 0 or not
            swap(arr[i],arr[count]);   // if value is not 0 swap with the count
            count++;
        }
    }
}

int main(){
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    for(int num :arr){      // Go through every element of arr, one by one, and store the current element in num.
        cout<<num<<" ";
    }

    return 0;
}