#include <iostream>
using namespace std; 
/*
The maximum size of an int array can be 10 ^ 6 
but it is inside int main
*/


int main(){
    /*we have to declare array size along with declaring array.
    we cannot make a dynamic size array. We have to always declare the size of array.
    */
    //Random declaration
    int arr1[3];
    for(int i = 0; i<3; i++)
    {
        cout<<arr1[i]<<" ";
    }

        cout<<endl;
    // All the values declaration
    int arr2[3] = {0};
    for(int i = 0; i<3; i++){
        cout<<arr2[i]<<" ";
    }

    cout<<endl;

     int arr3[3] = {};
     // here, we can see that, just intialising the array, (though we have not writtern any thing inside the flower or curly braces, still the array will 
     // generate and will intialize the array with the given number, If the number is not 
     // present, then it will be intialised to 0 )
    for(int i = 0; i<3; i++){
        cout<<arr3[i]<<" ";
    }

        cout<<endl;

     // here, we have intialised some of the values, not all, here, array have itself 
     // intialised the rest members to 0
     
    int arr4[5] = {1,2,3};

     for(int i = 0; i<5; i++){
        cout<<arr4[i]<<" ";
    }

    cout<<endl;


    return 0; 
}