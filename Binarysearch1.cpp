/*
write a program to find a number of given array 
    arr[10]= {1,2,3,4,5,6,7,9}
    input
        key=5
    output:
        4
*/

#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start =0;
    int end = size-1;
    int mid = start +(end-start)/2;  // mid = (start+end)/;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            start=mid+1;
        }
        if (key<arr[mid])
        {
            end= mid-1;
        }
        mid = start +(end-start)/2;
         
    }m
    return -1;
    
}
int main ()
{
    int arr[10]= {1,2,3,4,5,6,7,9};
    int even[10]= {1,2,3,4,5,6,7,9};
    int odd[5]= {2,4,5,6,7};
    int result = binarysearch(arr,10,5);
    cout<<"Index of 5 is "<<result<<endl;
    int evenindex = binarysearch(even,10,5);
    cout<<"Index of 5 is "<<evenindex<<endl;
    int oddindex = binarysearch(odd,5,6);
    cout<<"Index of 6 is "<<oddindex<<endl;

    return 0;
}