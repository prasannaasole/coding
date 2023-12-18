#include <iostream>
#include <algorithm>
#include<set>
using namespace std; 

int main(){
    //brute force apporach
    // keeping in account that every element in the array is distinct
int arr[] = {7, 10, 4 ,3 ,20 ,15};
int n = sizeof(arr)/sizeof(arr[0]);
sort(arr, arr+n);
int k;
cout<<"Please enter the k:"<<endl;
cin>>k;
cout<<arr[k-1];

//optimal approach

    return 0; 
}