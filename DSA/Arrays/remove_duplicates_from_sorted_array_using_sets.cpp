#include <iostream>
#include<set>
using namespace std; 

int main(){
    int arr[]  = {3,6,5,1,9,8, 1,1,1, 2,2,2, 8,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    set<int> s;
    for(int i = 0; i<n ;i++)
    {
        s.insert(arr[i]);
    }
   
    for(int i = 0; i< n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<endl;

    for (auto i : s) {
        cout << i << " ";
    }

    cout<<endl;
    cout<<endl;

    set<int>::iterator itr;
    for(itr = s.begin(); itr!=s.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    return 0; 
}