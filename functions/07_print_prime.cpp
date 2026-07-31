// waf to print all the prime numbers between 2 and N

#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

void printPrime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    cout<<"Prime numbers between 2 and "<<n<<" are :";
    printPrime(n);
    return 0;
}