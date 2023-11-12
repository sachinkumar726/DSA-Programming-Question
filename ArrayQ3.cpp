/*
    print sum of all element in an array
    input arr[5]={4,5,5,6,7}
    size =5;
    output = 27 ;

*/
#include<iostream>
using namespace std;

int sum (int arr[],int n)
{
    int sum =0;
    for (int i = 0; i <n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
    

}
int main ()
{
    int size;
    cout<<"Enter size of array:"<<endl;
    cin>>size;

    int arr[100];
    cout<<"enter element"<<endl;
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of array element is :"<<sum(arr,size)<<endl;

}