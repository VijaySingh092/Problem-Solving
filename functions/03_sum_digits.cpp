//  Calculate sum of digits of a number

#include<iostream>
using namespace std;

int sumofDigits(int num){
    int digitSum  =0;

    while(num>0){
        int lastDigit = num%10;
        num = num/10;
        digitSum +=lastDigit;
    }
    return digitSum;
}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"sum: "<<sumofDigits(number);

    return 0;
}