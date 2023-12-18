#include <iostream>
#include<climits>
#include<set>
using namespace std; 


int main(){
    int arr1[]={1,1,2,3,4,5};
    int arr2[]={2,3,4,4,5, 7};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
     int size2 = sizeof(arr2)/sizeof(arr2[0]);
   set <int> st;

   for(int i = 0; i<size1; i++)
   {
    st.insert(arr1[i]);
   }

    for(int i = 0; i<size2; i++)
   {
    st.insert(arr2[i]);
   }
  
  for(auto i: st)
  {
    cout<<i<<" ";
  }
    return 0; 
}