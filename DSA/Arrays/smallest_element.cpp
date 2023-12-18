#include <iostream>
#include <algorithm>
#include <climits>
using namespace std; 

int main(){
    int arr[] = {1,3,6,23,78,54, 86, 12};
    int n = sizeof(arr)/sizeof(arr[0]);

// brute force approach
    sort(arr, arr+n);
    cout<<arr[0]<<endl;


// optimal approach

int arr1[] = {2,4,56,21,67,45,90, -1};
int m = sizeof(arr1)/sizeof(arr1[0]);
int smallest = arr1[0];
for(int i = 0; i<m ; i++)
{
    if(smallest>arr1[i])
    {
        smallest = arr1[i];
    }
}

cout<<smallest<<endl;
    return 0; 
}