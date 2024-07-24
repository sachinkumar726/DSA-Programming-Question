#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
   
   // sachin
   // use substring find take out ch
   // alphabet frequency count using map
   
    string str = "Sachin";
    int n = str.size();
    map<char , int>mp;
    
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }
    
    for(auto it: mp){
        char ch = it.first;
        int num = it.second;
        cout<<ch<<" "<<num<<endl;
    }

    return 0;
   
}