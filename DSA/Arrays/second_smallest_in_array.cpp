#include <iostream>
#include <climits>
#include <algorithm>
using namespace std; 

int main(){
    
    // brute force approach

    int arr[] = {4,6,5,12,8,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int second_smallest = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(arr[i]>arr[0])
        {
                second_smallest = arr[i];
                break;
        }
    }

    cout<<second_smallest<<endl;


    // optimal approach

    int arr1[] = { 5,2,6,7,12,1,1, 2, 0};
    int m = sizeof(arr1)/ sizeof(arr1[0]);
    int smallest = arr[0];
    int second_smallest_optimal = INT32_MAX;

    for(int i = 0; i< m ; i++)
    {
        if(arr1[i]<second_smallest_optimal)
        {
           
            if(arr1[i]<smallest)
            {
                 second_smallest_optimal = smallest;
                smallest = arr1[i];
                
            }

        }
    }

    cout<<second_smallest_optimal<<endl;
    return 0; 
}