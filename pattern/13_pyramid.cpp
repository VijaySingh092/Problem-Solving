// print 
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;

int main(){
    int n =5;

    for(int i =0;i<n;i++){

        //for spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        // nums1 :i+1
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }

        // nums2
        for(int j=i;j>0; j--){
            cout<<j;
        }

        cout<<endl;
        
    }
    return 0;
}