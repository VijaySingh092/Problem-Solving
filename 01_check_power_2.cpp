// check if the number is power of 2 or not

#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if(n>0 && (n&(n-1))==0){     // bitwise & operation between n and (n-1) will always give 0 if n is a power of 2 and n is greater than 0
        return true;
    }
    else return false;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<n<<" is a power of 2.";
    }
    else{
        cout<<n<<" is not a power of 2";
    }
    return 0;
}