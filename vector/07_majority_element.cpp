//Given an array arr[] consisting of n integers, find all the array elements which occurs more than floor(n/3) times. Return the resulting array in strictly increasing order. If no such elements exist, return an empty array.

#include<iostream>
#include<vector>
using namespace std;

vector<int>majorityElement(vector<int>&arr){
int n = arr.size();
int ele1=-1;
int ele2=-1;
int count1=0;
int count2=0;
vector<int>result;

for(int i =0;i<n;i++){
    if(ele1==arr[i]){
        count1++;
    }
    else if(ele2==arr[i]){
        count2++;
    }
    else if(count1==0){
        ele1=arr[i];
        count1=1;
    }
    else if(count2==0){
        ele2=arr[i];
        count2=1;
    }
}

count1=0;
count2 =0;
for(int x:arr){
    if(x==ele1){
        count1++;
    }
    if(x==ele2){
        count2++;
    }
}
if(count1>n/3){
    result.push_back(ele1);
}
if(count2>n/3){
    result.push_back(ele2);
}

if(result.size()==2 && result[0]>result[1]){
    swap(result[0],result[1]);
}

return result;

}

int main(){
    vector<int> arr={4,4,4,4,1,1,1,1,2};
    vector<int>result=majorityElement(arr);
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}