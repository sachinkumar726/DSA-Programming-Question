/*Q2. A family is about to break their piggy bank to use the money for different purposes. The piggy bank here
represents an array (arr[]) consisting of N coins. The family has to split the coins of piggy bank into smaller
stack (sub-array) of coins such that the sum of the difference between the maximum value and the minimum
value of the coins for all the stacks (sub-arrays) is maximum.
Note: Each value of the array can be used only once that is only in one subarray.

Constraints:
1 <= N <= 500
1 <=arr[i] <= 100
Example 1:
Input:
5 → Value of N
{8,1,7,9,2} → arr[] elements from arr[0] to arr [N-1],
Where each element is separated by new line.
Output:
14
Explanation:

21

Let us break the array elements into following subarrays:
1. (8,1) → Max:8 Min:1
2. (7,9,2) → Max:9 Min:2
So, the difference between the maximum and minimum elements in each subarrays is
1. 8-1=7
2.9-2=7
Now, the sum of the differences of subarray is:
7+7=14
Hence, output is 14.
Example 2:
Input:
5 → Value of N
{1,2,1,0,5} → arr[], elements from arr[0] to arr [N-1],
where each elements is separated by a new line.
Output:
6
Explanation:
Let us break the array elements into following subarrays:
1. (1,2,1) → max:2, min:1
2. (0,5) → max:5, min:0
So, the difference between the max and min elements in each subarray is
1. 2-1 = 1
2. 5-0 = 5
Now, the sum of the differences of subarraya is:
1+5 = 6
Hence, output is 6.
The input format for testing
The candidate has to write the code to accept 2 inputs.
First input - Accept value for N(positive integer number)
Second input - Accept N number of values (arr[]), where each value is separated by a new line.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int maxx = 0;
    int minn = 0;
    for (int i = 0; i < n / 2; i++) {
        minn += arr[i];
    }
    for (int i = n / 2; i < n; i++) {
        maxx += arr[i];
    }
    if(n%2!=0){
        maxx=maxx-arr[n/2];
    }

    cout << maxx - minn << endl;

    return 0;
}
