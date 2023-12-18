#include <iostream>
using namespace std; 

int main(){
    int arr[] = {3,4,5,6,7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i = 1; i< n; i++)
    {
        if(arr[i-1]> arr[i])
        {
           cout<<"Not Sorted"<<endl;
           flag = false;
           break;
        }

    }
    if(flag)
    {
        cout<<"sorted"<<endl;
    }

    return 0; 
}