#include <iostream>
#include<string>
using namespace std; 

int main(){
       const int arraySize = 5;
    string arrayOfStrings[arraySize]; // An array of std::string

    // Initialize the array
    arrayOfStrings[0] = "Hello";
    arrayOfStrings[1] = "World";
    arrayOfStrings[2] = "in";
    arrayOfStrings[3] = "C++";
    arrayOfStrings[4] = "Programming";

    // Access and print the strings
    for (int i = 0; i < arraySize; i++) {
        std::cout << arrayOfStrings[i] << " ";
    }

    return 0;
}
