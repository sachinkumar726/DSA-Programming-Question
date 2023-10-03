#include<iostream>
#include<math.h>
using namespace std;

// function Binary to decimal Number
int BinaryToDecimal(int n){
    int decimal =0;

    int i=0;
    while (n>0)
    {
        int bit = n%10;
        decimal = bit*pow(2,i++) +decimal;
        n=n/10;
    }
    return decimal;
}
int main(){
    int n;
    cout<<"Enter the no."<<endl;
    cin>>n;
    int result = BinaryToDecimal(n);
    cout<<"Decimal No.= "<<result<<endl;
    
}
