// calculate the sum of numbers from 1 to N

#include <iostream>
using namespace std;

int sum(int n){
    int sum =0;
    for(int i =0;i<=n;i++){
        sum =sum+i;
    }
    return sum;
}

int main(){
    int value;
    cout<<"Enter the value of n : ";
    cin>>value;
    cout<<"The sum of all the numbers till"<< value<< " is : ";
    cout<<sum(value);
    return 0;
}