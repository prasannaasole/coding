#include <iostream>
using namespace std; 

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<=n-1; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
    cout<<endl;
    int temp = arr[0];
    for(int i = 0; i<=n-2; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for(int i = 0 ; i<=n-1; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0; 
}