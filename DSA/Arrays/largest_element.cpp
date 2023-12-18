#include <iostream>
#include <algorithm>
using namespace std; 

int main(){
    int arr[5] = {3,6,7,4,1};
    // The brute force approach
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    cout<<arr[n-1]<<endl;

// optimised solution

    int arr1[5] = {3,6,7,4,1};
    int max = arr1[0];

    for(int i = 1; i<n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    cout<<max<<endl;
    return 0; 
}