#include <iostream>
using namespace std; 
// here is a catch, when we just declare an array, not "intialise" an array 
// globally, then it is by default intialised to 0 for all the elements
// this generally happens in CPP and JAVA
int arr[5];

int main(){
    
    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}