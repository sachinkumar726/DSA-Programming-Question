// print the array 
#include<iostream>
using namespace std;

// create function 
void printarray(int arr[], int size)
{
    cout<<" Printing the array :"<<endl;
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done:"<<endl;
    
}
int main ()
{
    int number[15];
    // Acceing the array
    cout<<"Value of 14 index"<<number[14]<<endl;
    
    //initializng an array
    int second[3]={5,7,11};
    //Accesing an element
    cout<<" Value at 2 index"<<second[2]<<endl;
    
    int third[15]={2,7};
    
    int n=15;
    printarray(third,15);

    //Initialissng all location 0
    int fourth[15]={0};
    
    n=15;
    printarray(fourth,15);
    //initialissing all location 1
    int fifth[15]={1};
    
    n=15;
    printarray(fifth,15);
}