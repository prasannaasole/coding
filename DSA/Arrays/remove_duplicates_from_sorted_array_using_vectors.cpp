#include <iostream>
#include<algorithm>
#include<vector>
using namespace std; 

int main(){
    
    int arr[]  = {3,6,5,1,9,8, 1,1,1, 2,2,2, 8,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    sort(arr, arr+n);
    for(int i = 0; i<n; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            v.push_back(arr[i]);
        }
    }
for(int i = 0; i< n; i++)
{
    cout<<arr[i]<<" ";
}

cout<<endl;
cout<<endl;
    for(int i = 0; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0; 
}