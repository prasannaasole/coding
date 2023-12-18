#include <iostream>
using namespace std; 

void display(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
   
}

void rev(int arr[], int k, int n)
{
    int i = k;
    int j = n-1;
    while(i<j)
    {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
            i++;
    }
}

void rotate(int arr[], int n, int k)
{
    rev(arr,0,k);
    rev (arr,k,n);
    rev(arr, 0, n);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Please enter the the no of digits, which you want to rotate: "<<endl;
    cin>>k;
  
  display(arr,n);
  cout<<endl;
  cout<<endl;
    rotate(arr, n, k);
  display(arr,n);
    return 0; 
}