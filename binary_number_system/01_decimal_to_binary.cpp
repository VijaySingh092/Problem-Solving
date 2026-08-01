// convert the decimal number into binary

#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans =0, pow = 1;

    while(decNum>0){
        int rem = decNum%2;
        decNum /=2;

        ans +=(rem*pow);
        pow *=10;
    }
    return ans;
}

int main(){
    int decNum ;
    cout<<"Enter the decimal number : ";
    cin>>decNum;
    cout<<"The binary of "<<decNum<<" is : ";
    cout<<decToBinary(decNum);
    return 0;
}