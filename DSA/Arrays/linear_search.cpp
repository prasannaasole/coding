#include <iostream>
using namespace std; 
int linear_search(int arr[], int n, int value)
{
   
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==value)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    
    int arr[]= {1,4,5,2,9,8,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    if(linear_search(arr,n,88)==-1)
    {
        cout<<"The element you are searching does not exsist"<<endl;
    }
    else{
        cout<<linear_search(arr,n,88)+1<<endl;
    }
    return 0; 
}