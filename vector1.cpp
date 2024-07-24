    // 1  8,9,10
    // 2  4,5,8
    // 3  6,5,10
    // 4  5,8,9
    // 5  6,8,10

    #include<iostream>
    #include<bits/stdc++.h>

    using namespace std;

    int main(){

        // vector<int>arr={1,3,4,5,6};

        vector<vector<int>>arr = {{8,9,10}, {4,5,8},{6,5,10}, {6,8,10},{5,8,9}};

        for(int i=0; i<arr.size(); i++){
            cout<<i+1<<" ";
            for(int j=0; j<arr[i].size();j++ ){

                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }


        return 0;
    }