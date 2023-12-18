#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int arr1[] = {1,2,2, 3,3,4,5,6 };
    int arr2[] = {2,3,3,5,6,6,7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    vector <int> ans;
  for(int i = 0; i<n1; i++ )
  {
    for(int j = 0; j<n2; j++)
    {

        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            arr2[j] = -1;
            break;
        }
        else if(arr1[i]<arr2[j]){
            break;
        }
    }
  }

  for(int i = 0; i<ans.size(); i++)
  {
    cout<<ans[i]<<" ";
  }
    return 0; 
}