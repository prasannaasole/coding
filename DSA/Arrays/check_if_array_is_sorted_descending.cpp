#include <iostream>
using namespace std; 

int main(){
    int arr[] = {10,0, 9,6,4,1};
    bool flag = true;
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 1; i< n; i++)
    {
        if(arr[i-1]<arr[i])
        {
            cout<<"Not sorted in descending order"<<endl;
            flag = false;

            break;
        }
    }

if(flag)
{
    cout<<"Sorted in descending order"<<endl;
}
    return 0; 
}