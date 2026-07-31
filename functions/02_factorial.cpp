// calculate N factorial

#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int main(){
    int N;
    cout<<"Enter the value of N : ";
    cin>>N;
    cout<<"The factorial of "<<N<<" is : ";
    cout<<factorial(N);
    return 0;
}