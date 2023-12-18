#include <iostream>
#include<string>
using namespace std; 

int main(){
    string s = "madamx";
    bool flag = true;
    for(int i = 0; i< s.size()/2; i++)
    {
        if(s[i]!=s[s.size()-1-i])
        {
            cout<<"Not a pallindromic string"<<endl;
            flag = false;
            break;
        }

    }

    if(flag)
    {
        cout<<"Pallindromic string"<<endl;

    }
    return 0; 
}