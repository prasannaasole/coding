#include <iostream>
using namespace std; 
void swap(int &a, int &b ){
int temp = a;
a = b;
b = temp;
}
int main(){
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    int i = 0; 
    int j = n-1;
    while(i<j)
    {
        if(arr[j]==0)
        {
            j--;
        }

        if(arr[j]!=0)
        {
            if(arr[i]==0)
           {
            swap(arr[i],arr[j]);
           j--;
           i++;
           } 
           else{
            i++;
           }
            
        }
    }

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    return 0; 
}