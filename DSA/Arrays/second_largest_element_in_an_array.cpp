#include <iostream>
#include<algorithm>
using namespace std; 

int main(){
    //brute force approach
    int arr[] = { 1, 7,7,7,7,7,7,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    int second_largest = -1;
    int flag = 1;
    for(int i = n-2; i>=0; i--)
    {
         second_largest = arr[i];
        if(second_largest != arr[n-1])
        {
            flag = 0;
            break;
        }
       
    }
    if(flag == 0)
   {cout<<second_largest<<endl;} 
   else{
    cout<< " -1"<<endl;
   }
    
// optimised approach
      int arr1[] = {3,6,9,12,4,56,32,1};
    int m = sizeof(arr1)/sizeof(arr1[0]);
   // cout<<m<<endl;
    int max = arr1[0];
    int second_max = INT32_MIN;
   // cout<<second_max<<endl;
    for(int i = 1 ; i< m; i++)
    {
       if(arr1[i]>second_max)
       {
          
           if(arr1[i]>max)
           {
               max = arr1[i];
           }
           else{
               second_max = arr1[i];
           }
       }
       
    }

cout<<second_max<<endl;

    return 0; 

}