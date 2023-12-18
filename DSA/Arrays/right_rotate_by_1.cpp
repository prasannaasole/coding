#include <iostream>
using namespace std; 

void display(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
   
}
void right_rotate_1(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i = n -1; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0] = temp;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
     display(arr, n);
     cout<<endl;
     right_rotate_1(arr,n);
    display(arr, n);
    return 0; 
}