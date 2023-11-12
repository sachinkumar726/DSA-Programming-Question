#include<iostream>
using namespace std;

int solve(int arr[], int n,int target)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j]== target)
            {
                return {i,};
            }
            
        }
        
        
    }
    return {};
}

int main()
{
    int arr[10]= {2,7,11,15};
    int target;
    cout<<"enter your target :"<<endl;
    cin>>target;
    cout<<"index of target no.:"<<solve(arr,10,target)<<endl;
    
}