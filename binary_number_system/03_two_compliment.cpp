// convert the binary into it's two's compliment

#include<iostream>
using namespace std;

string onesComplement(string binary){
    for(int i=0;i<binary.length();i++){
        if(binary[i]=='0'){
            binary[i]='1';
        }
        else
        binary[i]='0';
    }
    return binary;
}

string twosComplement(string binary){
    binary = onesComplement(binary);
        int carry =1;

        for(int i=binary.length()-1;i>=0;i--){
            if(binary[i]=='1' && carry==1){
                binary[i]='0';
            }
            else if(binary[i]=='0' && carry==1){
                binary[i]='1';
                carry=0;
            }
        }
        if(carry==1){
            binary="1"+binary;
        }
        return binary;
}

int main(){
    string binary;
    cout<<"Enter a binary number: ";
    cin>>binary;
    cout<<"Two's complement : "<<twosComplement(binary);
    return 0;
}