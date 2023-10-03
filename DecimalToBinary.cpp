#include<iostream>
#include<math.h>
using namespace std;

// function Decimal to binary Number

int DecimalToBinary(int n){

    int binaryno= 0;
    int i=0;
    while (n>0)
    {
        int bit = n%2;
        binaryno = bit*pow(10,i++)+binaryno;
        n= n/2;

    }
    return binaryno;
}
int main(){
    int n;
    cout<<"Enter the No."<<endl;
    cin>>n;
    int BinaryNo= DecimalToBinary(n);
    cout<<BinaryNo;
}
