#include <iostream>
using namespace std; 

void print(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        print(n-1);
    }
}

int main(){
    int n ;
     cout<<"Please enter the number till which you want to print the numbers"<<endl;
      cout<<"(in reverse order)"<<endl;
     cin>>n;
     cout<<endl;
     print(n);

    return 0; 
}