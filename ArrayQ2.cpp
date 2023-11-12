/*
Print maximum  value and Minimum value 
    array[]=> {4, 12,8,10}
    o/p Max => 12
        Min => 4
*/
#include<iostream>
using namespace std;

int getMin(int num[],int n)
{
    int mini = INT64_MAX;
    for (int i = 0; i <n; i++)
    {
        mini=min(mini,num[i]);
        /*
        if (num[i]<n)
        {
            min= num[i];
        }
        */
    }
    return mini;
    
}
int getMax(int num[],int n)
{
    int maxi = INT64_MIN;
    for (int i = 0; i <n; i++)
    {
         maxi=max(maxi,num[i]);
        /*
        if (num[i]>n)
        {
            max= num[i];
        }
        */
    }
    return maxi;
    
}
int main ()
{
    int size;
    cout<<"Enter Size of arry :"<<endl;
    cin>>size;

    int num[100];
    cout<<"Enter Element"<<endl;
    // taking input an array 
    for (int i = 0; i <size; i++)
    {
        
        cin>>num[i];
    }
    cout<<"Maximum value is:"<<getMax(num, size)<<endl;;
    cout<<"Minimum Value is:"<<getMin(num,size);
    
}