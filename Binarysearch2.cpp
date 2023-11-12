/*
    Write a program to find first and last position of an elelment in sorted array

*/

#include<iostream>
using namespace std;

int firstocc(int arr[],int n, int key)
{
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans= mid;
            e= mid-1;
        }
        else if (key>arr[mid])
        {
            s= mid+1;
        }
        else if (key<arr[mid])
        {
            e= mid-1;
        }
        mid = s+(e-s)/2;
        
    }
    return ans;
    
}
int Lastocc(int arr[],int n, int key)
{
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans= mid;
            s= mid+1;
        }
        else if (key>arr[mid])
        {
            s= mid+1;
        }
        else if (key<arr[mid])
        {
            e= mid-1;
        }
        mid = s+(e-s)/2;
        
    }
    return ans;
    
}
int main ()
{
    int arr[10]={1,2,3,3,3,5,6};
    cout<<"First occerrence of 3 is index "<<firstocc(arr,10,3)<<endl;
    cout<<"Last Occerrence of 3 is Index "<<Lastocc(arr,10,3)<<endl;
    return 0;
}